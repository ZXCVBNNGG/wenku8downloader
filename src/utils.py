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


@retry(stop=stop_after_attempt(10), wait=wait_fixed(5))
def request(url, cookies):
    r = requests.get(url, headers=headers, cookies=cookies, stream=True, timeout=(30, 30))
    r.encoding = "gbk"
    return r


def no_utf8_code(text) -> str: return text.encode(encoding="gbk", errors="ignore").decode(encoding="gbk",
                                                                                          errors="ignore")


def resize(raw_img, target_w=406, target_h=504):
    i = Image.open(BytesIO(raw_img))
    raw_w, raw_h = i.size
    black_background = Image.new("RGB", (target_w, target_h))
    if (raw_w > raw_h and target_w < target_h) or (raw_w < raw_h and target_w > target_h):
        i = i.transpose(Image.ROTATE_270)
    raw_w, raw_h = i.size
    n1 = target_w / raw_w
    n2 = target_h / raw_h
    if n1 >= n2:
        w = int(n2 * raw_w)
        h = int(n2 * raw_h)
    else:
        w = int(n1 * raw_w)
        h = int(n1 * raw_h)
    i = i.resize((w, h))
    if w == target_w:
        black_background.paste(i, (0, int((target_h - h) / 2)))
    else:
        black_background.paste(i, (int((target_w - w) / 2), 0))
    b = BytesIO()
    black_background.save(b, format="jpeg")
    img = b.getvalue()
    return img


def to_jpg(raw_img):
    i = Image.open(BytesIO(raw_img))
    b = BytesIO()
    i.save(b, format="jpeg")
    return b.getvalue()
