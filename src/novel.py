from typing import List

import requests
from bs4 import BeautifulSoup
from requests.exceptions import ConnectionError as CE
from tenacity import retry, stop_after_attempt, retry_if_exception_type
from urllib3.exceptions import ConnectionError, ProtocolError

from .user import SelfUser
from .utils import fast_regex, request

headers = {
    'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:62.0) Gecko/20100101 Firefox/62.0',
}


class Novel:
    id: int
    title: str
    author: str
    library: str
    cover: bytes
    status: str
    statusCode: int
    totalWords: str
    briefIntroduction: str
    copyright: bool
    volumeList: List[dict]

    @retry(stop=stop_after_attempt(3), retry=retry_if_exception_type(ConnectionError))
    @retry(stop=stop_after_attempt(3), retry=retry_if_exception_type(ProtocolError))
    @retry(stop=stop_after_attempt(3), retry=retry_if_exception_type(CE))
    @retry(stop=stop_after_attempt(3), retry=retry_if_exception_type(TimeoutError))
    def __init__(self, articleid: int):
        main_page_request = requests.get(f"http://www.wenku8.net/book/{articleid}.htm", headers=headers,
                                         cookies=SelfUser.cookies)
        main_page_request.encoding = "gbk"
        main_page = BeautifulSoup(main_page_request.text, features="html.parser")
        main_web_content = main_page.text
        self.id = articleid
        self.title = fast_regex(r"槽([\s\S]*)\[推", main_web_content).lstrip()
        for i in [0, 1, 2]:
            read_page_request = requests.get(
                f"http://www.wenku8.net/novel/{i}/{articleid}/index.htm",
                cookies=SelfUser.cookies, headers=headers)
            if not read_page_request.status_code == 404:
                self.statusCode = i
        assert bool(self.title)
        self.author = fast_regex(r"小说作者：(.*)", main_web_content)
        self.library = fast_regex(r"文库分类：(.*)", main_web_content)
        self.status = fast_regex(r"文章状态：(.*)", main_web_content)
        self.totalWords = fast_regex(r"全文长度：(.*)字", main_web_content)
        self.copyright = True if main_web_content.find("版权问题") == -1 else False
        self.briefIntroduction = fast_regex("内容简介：([\s\S]*)阅读\n小说目录", main_web_content).lstrip().rstrip().replace(' ',
                                                                                                                  '') \
            .replace("\n\n", "").replace("	", "")
        self.cover = request(f"https://img.wenku8.com/image/{self.statusCode}/{self.id}/{self.id}s.jpg",
                             SelfUser.cookies).content
        read_page_request = requests.get(
            f"http://www.wenku8.net/novel/{self.statusCode}/{articleid}/index.htm",
            cookies=SelfUser.cookies, headers=headers)
        read_page_request.encoding = "gbk"
        read_page = BeautifulSoup(read_page_request.text,
                                  features="html.parser")
        tags = read_page.find_all("td")
        volumeList = []
        for i in tags:
            if i["class"][0] == "vcss":
                volumeList.append({"name": str(i.string), "chapters": []})
            elif i["class"][0] == "ccss" and i.string != "\xa0":
                volumeList[len(volumeList) - 1]["chapters"].append(
                    {"name": str(i.string), "cid": int(i.a["href"].replace(".htm", ""))})
        self.volumeList = volumeList

    def to_dict(self) -> dict:
        return {"id": self.id,
                "title": self.title,
                "author": self.author,
                "library": self.library,
                "cover": self.cover,
                "status": self.status,
                "statusCode": self.statusCode,
                "totalWords": self.totalWords,
                "briefIntroduction": self.briefIntroduction,
                "copyright": self.copyright,
                "volumeList": self.volumeList}
