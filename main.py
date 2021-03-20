import logging
import os
import pickle
import sys
from os import path

import requests
from requests.cookies import RequestsCookieJar

from src.exceptions import LoginFailedError
from src.novel import Novel
from src.user import SelfUser
from src.utils import get_imgs
from src.utils import mkdir
from src.utils import image_download

headers = {
    'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:62.0) Gecko/20100101 Firefox/62.0',
}

print("欢迎使用Wenku8下载器")
print("默认下载GBK编码文件")
cookiePath = path.dirname('.') + 'cookies.dat'
try:
    if os.path.getsize(cookiePath) > 0:
        cookies: RequestsCookieJar = pickle.load(open(cookiePath, 'rb'))
        self_user = SelfUser.fromCookies(cookies)
        print('从Cookies中登录成功！')
except FileNotFoundError:
    account = input("用户名：")
    password = input("密码：")
    print("登录中...")
    try:
        self_user = SelfUser(account, password)
        print("登录成功！")
        cookies = self_user.cookies
        print("保存Cookies中...")
        pickle.dump(cookies, open(cookiePath, 'wb'))
        print("保存成功！")
    except LoginFailedError:
        print("登录错误！")
        sys.exit()
while True:
    try:
        id = input("请输入作品ID：")
        novel = Novel(int(id))
        mkdir("download")
        root_dir = os.path.dirname('.') + "download/" + novel.title
        print(f"正在下载{novel.title}...")
        mkdir(root_dir)
        for i in novel.volumeList:
            chapter_dir = root_dir + "/" + i["name"]
            mkdir(chapter_dir)
            print(f"正在下载{i['name']}")
            for j in i["chapters"]:
                c = requests.get(f"http://dl.wenku8.com/packtxt.php?aid={id}&vid={j['cid']}&charset=gbk",
                                 cookies=cookies, headers=headers)
                c.encoding = "gbk"
                with open(chapter_dir + "/" + i["name"] + ".txt", "w") as f:
                    text = c.text.encode(encoding="gbk", errors="ignore").decode(encoding="gbk", errors="ignore")
                    f.write(text)
                if j["name"] == "插图":
                    print(f"下载{i['name']}插图中...")
                    imgs_dir = chapter_dir + "/" + "插图"
                    mkdir(imgs_dir)
                    imgs = get_imgs(status=novel.statusCode, aid=novel.id, cid=j['cid'], cookies=cookies)
                    for l in imgs:
                        with open(imgs_dir + "/" + str(imgs.index(l)) + ".jpg", "wb") as f:
                            print(f"保存第{str(imgs.index(l))}张插图")
                            f.write(image_download(l, cookies))
        print("下载完成！")
    except KeyboardInterrupt:
        sys.exit()
