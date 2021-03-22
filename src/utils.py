import os
from io import BytesIO
from typing import List

import regex
import requests
from PIL import Image
from bs4 import BeautifulSoup
from tenacity import *

headers = {
    'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:62.0) Gecko/20100101 Firefox/62.0',
}


def fast_regex(pattern: str, text: str) -> str:
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


@retry(stop=stop_after_attempt(3), wait=wait_fixed(5))
def request(url, cookies):
    r = requests.get(url, headers=headers, cookies=cookies)
    r.encoding = "gbk"
    return r


def no_utf8_code(text) -> str: return text.encode(encoding="gbk", errors="ignore").decode(encoding="gbk",
                                                                                          errors="ignore")


def resize(rimg):
    i = Image.open(BytesIO(rimg))
    rw, rh = i.size
    h = (120*rh) / rw
    i = i.resize((120, int(h)))
    b = BytesIO()
    i.save(b, format="jpeg")
    img = b.getvalue()
    return img
