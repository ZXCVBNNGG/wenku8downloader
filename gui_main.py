import logging
import os
import pickle
import sys
from os import path

from PyQt5 import QtWidgets
from PyQt5.QtCore import Qt, QThread, pyqtSignal, QMutex
from PyQt5.QtGui import QPixmap, QIntValidator
from PyQt5.QtWidgets import QTextBrowser
from requests.cookies import RequestsCookieJar

from src.bookcase import Bookcase
from src.downloader import Downloader
from src.exceptions import LoginFailedError
from src.novel import Novel
from src.ui.Login import Ui_Dialog
from src.ui.MainWindow import Ui_mainWindow
from src.user import SelfUser

novel_info_get_mutex = QMutex()


class QTextBrowserLogger(logging.Handler):
    def __init__(self, parent: QTextBrowser):
        super().__init__()
        self.widget = parent
        self.widget.setReadOnly(True)
        self.widget.setEnabled(True)

    def emit(self, record):
        msg = self.format(record)
        self.widget.append(msg)


class GetNovelThread(QThread):
    trigger = pyqtSignal(Novel)

    def __init__(self, nid, parent=None):
        self.nid = nid
        super(GetNovelThread, self).__init__(parent=parent)

    def run(self) -> None:
        novel_info_get_mutex.lock()
        logging.info("正在获取小说信息")
        n = Novel(self.nid)
        self.trigger.emit(n)


class DownloadThread(QThread):
    def __init__(self, mode, novel, **kwargs):
        super(DownloadThread, self).__init__()
        self.mode = mode
        self.kwargs = kwargs
        self.novel = novel

    def run(self) -> None:
        d = Downloader(self.novel)
        if self.mode == "singleVolume":
            logging.info(f"下载{self.novel.title} {self.kwargs['name']}中")
            d.singleVolume(self.kwargs["vid"], self.kwargs["name"])
            logging.info("下载成功！")
        elif self.mode == "cover":
            logging.info("下载封面中")
            d.cover()
            logging.info("下载成功！")
        elif self.mode == "allBook":
            logging.info(f"下载{self.novel.title}全本中")
            d.allBooks()
            logging.info("下载成功！")
        elif self.mode == "volumes":
            for i in self.novel.volumeList:
                for j in i["chapters"]:
                    if i["chapters"].index(j) == 0:
                        logging.info(f"下载{self.novel.title} {i['name']}中")
                        d.singleVolume(j['cid'] - 1, i["name"])
                        logging.info("下载成功！")
                    elif j["name"] == "插图":
                        logging.info(f"下载{self.novel.title}-{i['name']}插图中")
                        d.pictures(j['cid'], False, i["name"])
                        logging.info("下载成功！")


class GetBookCaseThread(QThread):
    trigger = pyqtSignal(Bookcase)

    def __init__(self, bid, parent=None):
        super(GetBookCaseThread, self).__init__(parent=parent)
        self.bid = bid

    def run(self):
        b = Bookcase(self.bid)
        self.trigger.emit(b)


class MainWindow(QtWidgets.QMainWindow, Ui_mainWindow):
    def __init__(self, parent=None):
        self.cachedBooks = {}
        super(MainWindow, self).__init__(parent=parent)
        self.setupUi(self)

    def setupUi(self, mainWindow):
        super(MainWindow, self).setupUi(self)
        self.setFixedSize(self.width(), self.height())
        self.Book.hide()
        self.BookID.setValidator(QIntValidator())
        self.BookList.itemClicked.connect(self.infoShow)
        self.BookAdd.clicked.connect(self.onBookAddClicked)
        self.DeleteFromList.clicked.connect(self.removeFromList)
        self.DownloadVolumes.clicked.connect(self.downloadVolumes)
        self.DownloadCover.clicked.connect(self.downloadCover)
        self.DownloadAll.clicked.connect(self.downloadAll)
        self.DownloadSingleVolume.clicked.connect(self.downloadVolume)
        self.BookAddFromBookcase.clicked.connect(self.getFromBookcase)
        logTextBox = QTextBrowserLogger(self.Logs)
        logTextBox.setFormatter(logging.Formatter('%(asctime)s [%(levelname)s]: %(message)s'))
        logging.getLogger().addHandler(logTextBox)
        logging.getLogger().setLevel(logging.INFO)

    def onBookAddClicked(self):
        if bool(self.BookID.text()):
            t = GetNovelThread(self.BookID.text(), parent=self)
            t.start()
            t.trigger.connect(self.add_novel)

    def infoShow(self, name):
        n = self.getByName(name)
        cover = QPixmap()
        cover.loadFromData(n.cover)
        self.BookCover.setScaledContents(True)
        self.BookCover.setPixmap(cover)
        self.BookTextInfo.setText(
            f"标题：{n.title}\n作者：{n.author}\n文库：{n.library}\n状态：{n.status}\n简介：{n.briefIntroduction}")
        self.Volumes.clear()
        for i in n.volumeList:
            self.Volumes.addItem(i["name"])
        self.Book.show()
        self.BookTextInfo.setEnabled(True)

    def removeFromList(self):
        self.BookList.takeItem(self.BookList.currentRow())
        self.Book.hide()

    def downloadVolumes(self):
        t = DownloadThread(mode="volumes", novel=self.getByName(self.BookList.currentItem()))
        t.start()

    def downloadVolume(self):
        n = self.getByName(self.BookList.currentItem())
        for i in n.volumeList:
            if i["name"] == self.Volumes.currentText():
                vid = i["chapters"][0]["cid"] - 1
                name = i["name"]
                t = DownloadThread(mode="singleVolume", novel=self.getByName(self.BookList.currentItem()), vid=vid,
                                   name=name)
                t.start()

    def downloadCover(self):
        t = DownloadThread(mode="cover", novel=self.getByName(self.BookList.currentItem()))
        t.start()

    def downloadAll(self):
        t = DownloadThread(mode="allBook", novel=self.getByName(self.BookList.currentItem()))
        t.start()

    def add_novel(self, n):
        logging.info(f"获取{n.title}信息成功")
        self.cachedBooks.update({n.title: n})
        self.BookList.addItem(n.title)
        novel_info_get_mutex.unlock()

    def getByName(self, x) -> Novel:
        return self.cachedBooks[x.text()]

    def getFromBookcase(self):
        b = Bookcase(self.Bookcase.currentIndex())
        for i in b.books:
            n = GetNovelThread(i, parent=self)
            n.start()
            n.trigger.connect(self.add_novel)


class LoginWindow(QtWidgets.QDialog, Ui_Dialog):
    def __init__(self):
        super(LoginWindow, self).__init__()
        self.setupUi(self)

    def setupUi(self, Dialog):
        super(LoginWindow, self).setupUi(self)
        self.setFixedSize(self.width(), self.height())
        self.setWindowModality(Qt.ApplicationModal)
        self.buttonBox.accepted.connect(self.login)
        self.buttonBox.rejected.connect(sys.exit)

    def login(self):
        if bool(self.username.text()) and bool(self.password.text()):
            self_user = SelfUser(self.username.text(), self.password.text())
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
    except LoginFailedError:
        l = LoginWindow()
        l.show()
    w = MainWindow()
    w.show()
    sys.exit(app.exec_())
