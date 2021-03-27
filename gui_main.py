import os
import pickle
import sys
from sys import path

from PyQt5 import QtWidgets
from requests.cookies import RequestsCookieJar

from src.exceptions import LoginFailedError
from src.gui import Ui_mainWindow
from src.user import SelfUser
from PyQt5.QtWidgets import QInputDialog


class MainWindow(Ui_mainWindow):
    def __init__(self):
        super(MainWindow, self).__init__()
        self.initUI()

    def initUI(self):
        self.login()

    def login(self):
        cookiePath = path.dirname('.') + 'cookies.dat'
        try:
            if os.path.getsize(cookiePath) > 0:
                cookies: RequestsCookieJar = pickle.load(open(cookiePath, 'rb'))
                self_user = SelfUser.fromCookies(cookies)
                self.printf("从Cookies中登录成功！")
        except FileNotFoundError:

            account =
            password = input("密码：")
            self.printf("登录中...")
            try:
                self_user = SelfUser(account, password)
                self.printf("登录成功！")
                cookies = self_user.cookies
                self.printf("保存Cookies中...")
                pickle.dump(cookies, open(cookiePath, 'wb'))
                self.printf("保存成功！")
            except LoginFailedError:
                self.printf("登录错误！")
                sys.exit()
        except LoginFailedError:
            account = input("用户名：")
            password = input("密码：")
            self.printf("登录中...")
            try:
                self_user = SelfUser(account, password)
                self.printf("登录成功！")
                cookies = self_user.cookies
                self.printf("保存Cookies中...")
                pickle.dump(cookies, open(cookiePath, 'wb'))
                self.printf("保存成功！")
            except LoginFailedError:
                self.printf("登录错误！")
                sys.exit()

    def printf(self, text):
        self.Log.append(text)
        cursor = self.Log.textCursor()
        self.Logs.moveCursor(cursor.End)
        QtWidgets.QApplication.processEvents()