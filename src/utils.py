import os
from typing import List

import regex
import requests
from bs4 import BeautifulSoup
from tenacity import *

headers = {
    'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:62.0) Gecko/20100101 Firefox/62.0',
}


def fastRegex(pattern: str, text: str) -> str:
    try:
        return regex.compile(pattern, regex.MULTILINE).search(text)[1]
    except TypeError:
        return ""


def get_imgs(status: int, aid: int, cid: int, cookies) -> List[str]:
    r = requests.get(f"https://www.wenku8.net/novel/{status}/{aid}/{cid}.htm", cookies=cookies,
                     headers=headers)
    r.encoding = "gbk"
    bs = BeautifulSoup(r.text, features="html.parser")
    imgs = []
    for i in bs.find_all("img"):
        imgs.append(i.get("src"))
    return imgs


def mkdir(path: str):
    if not os.path.exists(path):
        os.mkdir(path)


@retry(stop=stop_after_attempt(3),wait=wait_fixed(10))
def image_download(url, cookies):
    img = requests.get(url, cookies=cookies, headers=headers)
    return img.content


def no_utf8_code(text) -> str: return text.encode(encoding="gbk", errors="ignore").decode(encoding="gbk",
                                                                                          errors="ignore")
