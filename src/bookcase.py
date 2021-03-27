from typing import List

from bs4 import BeautifulSoup
from .utils import request, fast_regex
from .user import SelfUser

class Bookcase:
    id: int
    books: List[int]

    @classmethod
    def __init__(cls, id: int):
        cls.id = id
        bookshelf_r = request(f"https://www.wenku8.net/modules/article/bookcase.php?classid={id}", SelfUser.cookies)
        bookshelf_p = BeautifulSoup(bookshelf_r.text, features="html.parser")
        for i in bookshelf_p.find_all("a"):
            if bool(fast_regex(r"https://www.wenku8.net/modules/article/readbookcase.php\?aid=(\d*)", i.get("href"))):
                cls.books.append(int(fast_regex(r"https://www.wenku8.net/modules/article/readbookcase.php\?aid=(\d*)", i.get("href"))))
