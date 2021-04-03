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

    @classmethod
    @retry(stop=stop_after_attempt(3), retry=retry_if_exception_type(ConnectionError))
    @retry(stop=stop_after_attempt(3), retry=retry_if_exception_type(ProtocolError))
    @retry(stop=stop_after_attempt(3), retry=retry_if_exception_type(CE))
    @retry(stop=stop_after_attempt(3), retry=retry_if_exception_type(TimeoutError))
    def __init__(cls, articleid: int):
        main_page_request = requests.get(f"http://www.wenku8.net/book/{articleid}.htm", headers=headers,
                                         cookies=SelfUser.cookies)
        main_page_request.encoding = "gbk"
        main_page = BeautifulSoup(main_page_request.text, features="html.parser")
        main_web_content = main_page.text
        cls.id = articleid
        cls.title = fast_regex(r"板([\s\S]*)\[推", main_web_content).lstrip()
        for i in [0, 1, 2]:
            read_page_request = requests.get(
                f"http://www.wenku8.net/novel/{i}/{articleid}/index.htm",
                cookies=SelfUser.cookies, headers=headers)
            if not read_page_request.status_code == 404:
                cls.statusCode = i
        assert bool(cls.title)
        cls.author = fast_regex(r"小说作者：(.*)", main_web_content)
        cls.library = fast_regex(r"文库分类：(.*)", main_web_content)
        cls.status = fast_regex(r"文章状态：(.*)", main_web_content)
        cls.totalWords = fast_regex(r"全文长度：(.*)字", main_web_content)
        cls.copyright = True if main_web_content.find("版权问题") == -1 else False
        cls.briefIntroduction = fast_regex(r"内容简介：([\s\S]*)阅读", main_web_content).lstrip().rstrip()
        cls.cover = request(f"https://img.wenku8.com/image/{cls.statusCode}/{cls.id}/{cls.id}s.jpg",
                            SelfUser.cookies).content
        read_page_request = requests.get(
            f"http://www.wenku8.net/novel/{cls.statusCode}/{articleid}/index.htm",
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
        cls.volumeList = volumeList
