import os

from src.novel import Novel
from src.user import SelfUser
from src.utils import mkdir, request, no_utf8_code, get_imgs, resize


class Downloader:
    root_dir: str
    downSite = "dl3"
    novel: Novel

    @classmethod
    def __init__(cls, n: Novel):
        cls.novel = n
        mkdir("download")
        cls.root_dir = os.path.dirname('.') + "download/" + cls.novel.title
        mkdir(cls.root_dir)

    @classmethod
    def singleVolume(cls, vid: int, name: str):
        c = request(f"http://{cls.downSite}.wenku8.com/packtxt.php?aid={cls.novel.id}&vid={vid}&charset=gbk", SelfUser.cookies)
        chapter_dir = cls.root_dir + "/" + name
        mkdir(chapter_dir)
        with open(chapter_dir + "/" + name + ".txt", "w") as f:
            f.write(no_utf8_code(c.text))

    @classmethod
    def cover(cls):
        with open(cls.root_dir + "/" + "cover.jpg", "wb") as f:
            f.write(cls.novel.cover)

    @classmethod
    def allBooks(cls):
        c = request(f"http://{cls.downSite}.wenku8.com/down.php?type=txt&id={cls.novel.id}", SelfUser.cookies)
        with open(cls.root_dir + "/" + cls.novel.title + ".txt", "w") as f:
            f.write(no_utf8_code(c.text))

    @classmethod
    def pictures(cls, cid, is_resize, name):
        imgs = get_imgs(status=cls.novel.statusCode, aid=cls.novel.id, cid=cid, cookies=SelfUser.cookies)
        chapter_dir = cls.root_dir + "/" + name
        mkdir(chapter_dir)
        imgs_dir = chapter_dir + "/" + "插图"
        mkdir(imgs_dir)
        for i in imgs:
            with open(imgs_dir + "/" + str(imgs.index(i)) + ".jpg", "wb") as f:
                f.write(resize(request(i, SelfUser.cookies).content if is_resize else request(i, SelfUser.cookies).content))