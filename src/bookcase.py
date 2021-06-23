from typing import List

from bs4 import BeautifulSoup

from .user import SelfUser
from .utils import request, fast_regex


class Bookcase:
    id: int
    books: List[int]

    def __init__(self, id: int):
        self.id = id
        self.books = []
        bookshelf_r = request(f"https://www.wenku8.net/modules/article/bookcase.php?classid={id}", SelfUser.cookies)
        bookshelf_p = BeautifulSoup(bookshelf_r.text, features="html.parser")
        for i in bookshelf_p.find_all("a"):
            if bool(fast_regex(r"https://www.wenku8.net/modules/article/readbookcase.php\?aid=(\d*)&bid=\d*(?!.)",
                               i.get("href"))):
                self.books.append(int(
                    fast_regex(r"https://www.wenku8.net/modules/article/readbookcase.php\?aid=(\d*)&bid=\d*(?!.)",
                               i.get("href"))))
