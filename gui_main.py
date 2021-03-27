import os
import pickle
import sys
from os import path

from PyQt5 import QtWidgets
from requests.cookies import RequestsCookieJar

from src.exceptions import LoginFailedError
from src.ui.Login import Ui_Dialog
from src.ui.MainWindow import Ui_mainWindow
from src.user import SelfUser


class MainWindow(QtWidgets.QMainWindow, Ui_mainWindow):
    def __init__(self, parent=None):
        super(MainWindow, self).__init__(parent=parent)
        self.setupUi(self)

    def logger(self, text):
        self.Logs.append(text)
        cursor = self.Logs.textCursor()
        self.Logs.moveCursor(cursor.End)
        QtWidgets.QApplication.processEvents()


class LoginWindow(QtWidgets.QDialog, Ui_Dialog):
    def __init__(self):
        super(LoginWindow, self).__init__()
        self.setupUi(self)

    def setupUi(self, Dialog):
        cookiePath = path.dirname('.') + 'cookies.dat'
        try:
            if os.path.getsize(cookiePath) > 0:
                cookies: RequestsCookieJar = pickle.load(open(cookiePath, 'rb'))
                self_user = SelfUser.fromCookies(cookies)
        except FileNotFoundError:
            account = self.username.text()
            password = self.password.text()
            try:
                self_user = SelfUser(account, password)
                cookies = self_user.cookies
                pickle.dump(cookies, open(cookiePath, 'wb'))
            except LoginFailedError:
                self.login()


if __name__ == '__main__':
    app = QtWidgets.QApplication(sys.argv)
    w = MainWindow()
    w.show()
    l = LoginWindow()
    l.show()
    sys.exit(app.exec_())
