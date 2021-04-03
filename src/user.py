import requests
from bs4 import BeautifulSoup
from requests.cookies import RequestsCookieJar

from .exceptions import LoginFailedError
from .utils import fast_regex

headers = {
    'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:62.0) Gecko/20100101 Firefox/62.0',
}


class User(object):
    id: int
    username: str
    nickname: str
    level: str
    title: str
    gender: str
    email: str
    qq: str
    msn: str
    website: str
    registrationDate: str
    contribution: int
    experience: int
    existingPoints: int
    userSignature: str
    personalProfile: str

    @classmethod
    def __init__(cls, id: int):
        """
        Need Login
        :param id: User ID
        """
        userinfo_request = requests.get(f"https://www.wenku8.net/userinfo.php?id={id}", cookies=SelfUser.cookies,
                                        headers=headers)
        userinfo_request.encoding = "gbk"
        userinfo_page = BeautifulSoup(userinfo_request.text, features="html.parser")
        userinfo_page_content = userinfo_page.text
        cls.id = int(fast_regex(r"用户ID：\n(\d*)", userinfo_page_content))
        cls.username = fast_regex(r"用户名：\n(.*)", userinfo_page_content)
        cls.nickname = fast_regex(r"昵称：\n(.*)\(留空则用户名做昵称\)", userinfo_page_content)
        cls.level = fast_regex(r"等级：\n(.*)", userinfo_page_content)
        cls.title = fast_regex(r"头衔：\n(.*)", userinfo_page_content)
        cls.gender = fast_regex(r"性别：\n(.*)", userinfo_page_content)
        cls.email = fast_regex(r"Email：\n(.*)", userinfo_page_content)
        cls.qq = fast_regex(r"QQ：\n(.*)", userinfo_page_content)
        cls.msn = fast_regex(r"MSN：\n(.*)", userinfo_page_content)
        cls.website = fast_regex(r"网站：\n(.*)", userinfo_page_content)
        cls.registrationDate = fast_regex(r"注册日期：\n(.*)", userinfo_page_content)
        cls.contribution = int(fast_regex(r"贡献值：\n(.*)", userinfo_page_content))
        cls.experience = int(fast_regex(r"经验值：\n(.*)", userinfo_page_content))
        cls.existingPoints = int(fast_regex(r"现有积分：\n(.*)", userinfo_page_content))
        cls.userSignature = fast_regex(r"用户签名：\n(.*)", userinfo_page_content)
        cls.personalProfile = fast_regex(r"个人简介：\n(.*)", userinfo_page_content)


class SelfUser(User):
    cookies: RequestsCookieJar
    maximumNumberOfFriends: int
    maximumNumberOfMessagesInMailbox: int
    maximumCollectionOfBookshelves: int
    allowRecommendationsPerDay: int

    @classmethod
    def __init__(cls, username: str, password: str):
        cls.login(username, password)
        super().__init__(cls.id)

    @classmethod
    def login(cls, username: str, password: str):
        # 以下部分来自https://github.com/mikulo/miku/blob/690eb1d4558e1ecdf6a2d4e1aecbf26187592b0e/wenku8up.py#L39
        login_data = {'username': username, 'password': password, 'usercookie': 315360000, 'action': 'login',
                      'submit': '%26%23160%3B%B5%C7%26%23160%3B%26%23160%3B%C2%BC%26%23160%3B'}
        login = requests.post('https://www.wenku8.net/login.php', data=login_data, headers=headers)
        login.encoding = 'gbk'
        if login.text.find('登录成功') != -1:
            cls.cookies = login.cookies
            user_detail_request = requests.get("https://www.wenku8.net/userdetail.php", cookies=cls.cookies,
                                               headers=headers)
            user_detail_request.encoding = "gbk"
            text = BeautifulSoup(user_detail_request.text, features="html.parser").text
            cls.id = int(fast_regex(r"用户ID：\n(\d*)", text))
            cls.maximumNumberOfFriends = int(fast_regex(r"最多好友数：\n(\d*)", text))
            cls.maximumNumberOfMessagesInMailbox = int(fast_regex(r"信箱最多消息数：\n(\d*)", text))
            cls.maximumCollectionOfBookshelves = int(fast_regex(r"书架最大收藏量：\n(\d*)", text))
            cls.allowRecommendationsPerDay = int(fast_regex(r"每天允许推荐次数：\n(\d*)", text))
        else:
            raise LoginFailedError

    @classmethod
    def fromCookies(cls, cookies: RequestsCookieJar):
        try:
            cls.cookies = cookies
            user_detail_request = requests.get("https://www.wenku8.net/userdetail.php", cookies=cls.cookies,
                                               headers=headers)
            user_detail_request.encoding = "gbk"
            text = BeautifulSoup(user_detail_request.text, features="html.parser").text
            cls.id = int(fast_regex(r"用户ID：\n(\d*)", text))
            cls.maximumNumberOfFriends = int(fast_regex(r"最多好友数：\n(\d*)", text))
            cls.maximumNumberOfMessagesInMailbox = int(fast_regex(r"信箱最多消息数：\n(\d*)", text))
            cls.maximumCollectionOfBookshelves = int(fast_regex(r"书架最大收藏量：\n(\d*)", text))
            cls.allowRecommendationsPerDay = int(fast_regex(r"每天允许推荐次数：\n(\d*)", text))
            super().__init__(cls.id)
            return cls
        except:
            raise LoginFailedError
