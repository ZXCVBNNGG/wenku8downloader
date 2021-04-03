import logging
import os
import pickle
import sys
from os import path

from PyQt5 import QtWidgets
from PyQt5.QtCore import Qt
from PyQt5.QtGui import QPixmap, QIntValidator
from PyQt5.QtWidgets import QTextBrowser
from requests.cookies import RequestsCookieJar

from src.novel import Novel
from src.ui.Login import Ui_Dialog
from src.ui.MainWindow import Ui_mainWindow
from src.user import SelfUser


class QTextBrowserLogger(logging.Handler):
    def __init__(self, parent: QTextBrowser):
        super().__init__()
        self.widget = parent
        self.widget.setReadOnly(True)
        self.widget.setEnabled(True)

    def emit(self, record):
        msg = self.format(record)
        self.widget.append(msg)


class MainWindow(QtWidgets.QMainWindow, Ui_mainWindow):
    def __init__(self, parent=None):
        self.cachedBooks = {}
        super(MainWindow, self).__init__(parent=parent)
        self.setupUi(self)

    def setupUi(self, mainWindow):
        super(MainWindow, self).setupUi(self)
        self.Book.hide()
        self.BookID.setValidator(QIntValidator())
        self.BookList.itemClicked.connect(self.infoShow)
        self.BookAdd.clicked.connect(self.add_novel)
        logTextBox = QTextBrowserLogger(self.Logs)
        logTextBox.setFormatter(logging.Formatter('%(asctime)s - %(levelname)s - %(message)s'))
        logging.getLogger().addHandler(logTextBox)
        logging.getLogger().setLevel(logging.INFO)

    def infoShow(self, name):
        n = self.getByName(name)
        cover = QPixmap()
        cover.loadFromData(n.cover)
        self.BookCover.setPixmap(cover)
        self.BookTextInfo.setText(
            f"标题：{n.title}\n作者：{n.author}\n文库：{n.library}\n状态：{n.status}\n简介：{n.briefIntroduction}")
        for i in n.volumeList:
            self.Volumes.addItem(i["name"])
        self.Book.show()
        self.BookTextInfo.setEnabled(True)

    def add_novel(self):
        if bool(self.BookID.text()):
            logging.info("正在获取小说信息")
            n = Novel(int(self.BookID.text()))
            logging.info(f"获取{n.title}信息成功")
            self.cachedBooks.update({n.title: n})
            self.BookList.addItem(n.title)

    def getByName(self, x) -> Novel:
        return self.cachedBooks[x.text()]


class LoginWindow(QtWidgets.QDialog, Ui_Dialog):
    def __init__(self):
        super(LoginWindow, self).__init__()
        self.setupUi(self)

    def setupUi(self, Dialog):
        super(LoginWindow, self).setupUi(self)
        self.setWindowModality(Qt.ApplicationModal)
        self.buttonBox.accepted.connect(self.login(self.username.text(), self.password.text()))
        self.buttonBox.rejected.connect(sys.exit())

    def login(self, username, password):
        self_user = SelfUser(username, password)
        cookies = self_user.cookies
        pickle.dump(cookies, open(cookiePath, 'wb'))


if __name__ == '__main__':
    app = QtWidgets.QApplication(sys.argv)
    cookiePath = path.dirname('.') + 'cookies.dat'
    try:
        if os.path.getsize(cookiePath) > 0:
            cookies: RequestsCookieJar = pickle.load(open(cookiePath, 'rb'))
            SelfUser.fromCookies(cookies)
    except FileNotFoundError:
        l = LoginWindow()
        l.show()
    w = MainWindow()
    w.show()
    sys.exit(app.exec_())
