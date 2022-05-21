import copy
import os
import string
import sys
import random

from PyQt5.QtWidgets import *
from PyQt5.QtGui import *
from PyQt5.QtCore import *
from PyQt5 import *

import aimove
import boardprinter
import createboard
import heuristic
import chessvisualizer
import logger

playboard = createboard.create()


class ChessGUI(QWidget):
    def __init__(self, array):
        super().__init__()
        self.timer = QTimer(self)
        self.timer.start(1000)
        self.timer.timeout.connect(lambda: self.timeout())
        self.Line0 = QLineEdit()
        self.Line1 = QLineEdit()
        self.Line2 = QLineEdit()
        self.consolettbox = QTextEdit()
        self.pixlabel = QLabel()
        self.board = QPixmap()
        self.board.load('./src/res/chess.png')
        self.board = self.board.scaled(800, 800)
        self.initUI()
        self.array = array

    def initUI(self):
        global x
        global y
        global x2
        global y2

        self.pixlabel.setPixmap(self.board)
        selectbox = QGroupBox('Selection')
        vbox = QGridLayout()
        vbox.addWidget(self.Line0)
        selectbox.setLayout(vbox)

        statusbox = QGroupBox('Status')
        vbox = QGridLayout()
        vbox.addWidget(self.Line1, 0, 0)
        vbox.addWidget(self.Line2, 0, 1)
        statusbox.setLayout(vbox)

        runbox = QGroupBox('Input')
        vbox = QGridLayout()
        targetbutton = QPushButton('Target')
        posbutton = QPushButton('Pos')
        runbutton = QPushButton('Run')
        exitbutton = QPushButton('Exit')
        vbox.addWidget(targetbutton, 0, 0)
        vbox.addWidget(posbutton, 0, 1)
        vbox.addWidget(runbutton, 0, 2)
        vbox.addWidget(exitbutton, 0, 3)
        runbox.setLayout(vbox)

        exitbutton.clicked.connect(lambda: QCoreApplication.exit())
        targetbutton.clicked.connect(lambda: self.Line1.setText(self.Line0.text()))
        posbutton.clicked.connect(lambda: self.Line2.setText(self.Line0.text()))
        runbutton.clicked.connect(lambda: self.runbtnftn())

        groupbox = QGroupBox('Board')
        zero_zero_button = QPushButton('0-0')
        zero_one_button = QPushButton('0-1')
        zero_two_button = QPushButton('0-2')
        zero_three_button = QPushButton('0-3')
        zero_four_button = QPushButton('0-4')
        zero_five_button = QPushButton('0-5')
        zero_six_button = QPushButton('0-6')
        zero_seven_button = QPushButton('0-7')

        one_zero_button = QPushButton('1-0')
        one_one_button = QPushButton('1-1')
        one_two_button = QPushButton('1-2')
        one_three_button = QPushButton('1-3')
        one_four_button = QPushButton('1-4')
        one_five_button = QPushButton('1-5')
        one_six_button = QPushButton('1-6')
        one_seven_button = QPushButton('1-7')

        two_zero_button = QPushButton('2-0')
        two_one_button = QPushButton('2-1')
        two_two_button = QPushButton('2-2')
        two_three_button = QPushButton('2-3')
        two_four_button = QPushButton('2-4')
        two_five_button = QPushButton('2-5')
        two_six_button = QPushButton('2-6')
        two_seven_button = QPushButton('2-7')

        three_zero_button = QPushButton('3-0')
        three_one_button = QPushButton('3-1')
        three_two_button = QPushButton('3-2')
        three_three_button = QPushButton('3-3')
        three_four_button = QPushButton('3-4')
        three_five_button = QPushButton('3-5')
        three_six_button = QPushButton('3-6')
        three_seven_button = QPushButton('3-7')

        four_zero_button = QPushButton('4-0')
        four_one_button = QPushButton('4-1')
        four_two_button = QPushButton('4-2')
        four_three_button = QPushButton('4-3')
        four_four_button = QPushButton('4-4')
        four_five_button = QPushButton('4-5')
        four_six_button = QPushButton('4-6')
        four_seven_button = QPushButton('4-7')

        five_zero_button = QPushButton('5-0')
        five_one_button = QPushButton('5-1')
        five_two_button = QPushButton('5-2')
        five_three_button = QPushButton('5-3')
        five_four_button = QPushButton('5-4')
        five_five_button = QPushButton('5-5')
        five_six_button = QPushButton('5-6')
        five_seven_button = QPushButton('5-7')

        six_zero_button = QPushButton('6-0')
        six_one_button = QPushButton('6-1')
        six_two_button = QPushButton('6-2')
        six_three_button = QPushButton('6-3')
        six_four_button = QPushButton('6-4')
        six_five_button = QPushButton('6-5')
        six_six_button = QPushButton('6-6')
        six_seven_button = QPushButton('6-7')

        seven_zero_button = QPushButton('7-0')
        seven_one_button = QPushButton('7-1')
        seven_two_button = QPushButton('7-2')
        seven_three_button = QPushButton('7-3')
        seven_four_button = QPushButton('7-4')
        seven_five_button = QPushButton('7-5')
        seven_six_button = QPushButton('7-6')
        seven_seven_button = QPushButton('7-7')

        vbox = QGridLayout()

        vbox.addWidget(zero_zero_button, 0, 0)
        vbox.addWidget(zero_one_button, 0, 1)
        vbox.addWidget(zero_two_button, 0, 2)
        vbox.addWidget(zero_three_button, 0, 3)
        vbox.addWidget(zero_four_button, 0, 4)
        vbox.addWidget(zero_five_button, 0, 5)
        vbox.addWidget(zero_six_button, 0, 6)
        vbox.addWidget(zero_seven_button, 0, 7)

        vbox.addWidget(one_zero_button, 1, 0)
        vbox.addWidget(one_one_button, 1, 1)
        vbox.addWidget(one_two_button, 1, 2)
        vbox.addWidget(one_three_button, 1, 3)
        vbox.addWidget(one_four_button, 1, 4)
        vbox.addWidget(one_five_button, 1, 5)
        vbox.addWidget(one_six_button, 1, 6)
        vbox.addWidget(one_seven_button, 1, 7)

        vbox.addWidget(two_zero_button, 2, 0)
        vbox.addWidget(two_one_button, 2, 1)
        vbox.addWidget(two_two_button, 2, 2)
        vbox.addWidget(two_three_button, 2, 3)
        vbox.addWidget(two_four_button, 2, 4)
        vbox.addWidget(two_five_button, 2, 5)
        vbox.addWidget(two_six_button, 2, 6)
        vbox.addWidget(two_seven_button, 2, 7)

        vbox.addWidget(three_zero_button, 3, 0)
        vbox.addWidget(three_one_button, 3, 1)
        vbox.addWidget(three_two_button, 3, 2)
        vbox.addWidget(three_three_button, 3, 3)
        vbox.addWidget(three_four_button, 3, 4)
        vbox.addWidget(three_five_button, 3, 5)
        vbox.addWidget(three_six_button, 3, 6)
        vbox.addWidget(three_seven_button, 3, 7)

        vbox.addWidget(four_zero_button, 4, 0)
        vbox.addWidget(four_one_button, 4, 1)
        vbox.addWidget(four_two_button, 4, 2)
        vbox.addWidget(four_three_button, 4, 3)
        vbox.addWidget(four_four_button, 4, 4)
        vbox.addWidget(four_five_button, 4, 5)
        vbox.addWidget(four_six_button, 4, 6)
        vbox.addWidget(four_seven_button, 4, 7)

        vbox.addWidget(five_zero_button, 5, 0)
        vbox.addWidget(five_one_button, 5, 1)
        vbox.addWidget(five_two_button, 5, 2)
        vbox.addWidget(five_three_button, 5, 3)
        vbox.addWidget(five_four_button, 5, 4)
        vbox.addWidget(five_five_button, 5, 5)
        vbox.addWidget(five_six_button, 5, 6)
        vbox.addWidget(five_seven_button, 5, 7)

        vbox.addWidget(six_zero_button, 6, 0)
        vbox.addWidget(six_one_button, 6, 1)
        vbox.addWidget(six_two_button, 6, 2)
        vbox.addWidget(six_three_button, 6, 3)
        vbox.addWidget(six_four_button, 6, 4)
        vbox.addWidget(six_five_button, 6, 5)
        vbox.addWidget(six_six_button, 6, 6)
        vbox.addWidget(six_seven_button, 6, 7)

        vbox.addWidget(seven_zero_button, 7, 0)
        vbox.addWidget(seven_one_button, 7, 1)
        vbox.addWidget(seven_two_button, 7, 2)
        vbox.addWidget(seven_three_button, 7, 3)
        vbox.addWidget(seven_four_button, 7, 4)
        vbox.addWidget(seven_five_button, 7, 5)
        vbox.addWidget(seven_six_button, 7, 6)
        vbox.addWidget(seven_seven_button, 7, 7)
        groupbox.setLayout(vbox)

        consolebox = QGroupBox('Console')
        vbox = QGridLayout()
        vbox.addWidget(self.consolettbox)
        consolebox.setLayout(vbox)

        rightgroupbox = QGroupBox('User')
        vbox = QGridLayout()
        vbox.addWidget(selectbox)
        vbox.addWidget(statusbox)
        vbox.addWidget(groupbox)
        vbox.addWidget(consolebox)
        vbox.addWidget(runbox)
        rightgroupbox.setLayout(vbox)

        boardbox = QGroupBox('Board')
        vbox = QGridLayout()
        vbox.addWidget(self.pixlabel)
        boardbox.setLayout(vbox)

        grid = QGridLayout()
        grid.addWidget(boardbox,0,0)
        grid.addWidget(rightgroupbox, 0,1)
        self.setLayout(grid)

        zero_zero_button.clicked.connect(lambda: self.zero_zero())
        zero_one_button.clicked.connect(lambda: self.zero_one())
        zero_two_button.clicked.connect(lambda: self.zero_two())
        zero_three_button.clicked.connect(lambda: self.zero_three())
        zero_four_button.clicked.connect(lambda: self.zero_four())
        zero_five_button.clicked.connect(lambda: self.zero_five())
        zero_six_button.clicked.connect(lambda: self.zero_six())
        zero_seven_button.clicked.connect(lambda: self.zero_seven())

        one_zero_button.clicked.connect(lambda: self.one_zero())
        one_one_button.clicked.connect(lambda: self.one_one())
        one_two_button.clicked.connect(lambda: self.one_two())
        one_three_button.clicked.connect(lambda: self.one_three())
        one_four_button.clicked.connect(lambda: self.one_four())
        one_five_button.clicked.connect(lambda: self.one_five())
        one_six_button.clicked.connect(lambda: self.one_six())
        one_seven_button.clicked.connect(lambda: self.one_seven())

        two_zero_button.clicked.connect(lambda: self.two_zero())
        two_one_button.clicked.connect(lambda: self.two_one())
        two_two_button.clicked.connect(lambda: self.two_two())
        two_three_button.clicked.connect(lambda: self.two_three())
        two_four_button.clicked.connect(lambda: self.two_four())
        two_five_button.clicked.connect(lambda: self.two_five())
        two_six_button.clicked.connect(lambda: self.two_six())
        two_seven_button.clicked.connect(lambda: self.two_seven())

        three_zero_button.clicked.connect(lambda: self.three_zero())
        three_one_button.clicked.connect(lambda: self.three_one())
        three_two_button.clicked.connect(lambda: self.three_two())
        three_three_button.clicked.connect(lambda: self.three_three())
        three_four_button.clicked.connect(lambda: self.three_four())
        three_five_button.clicked.connect(lambda: self.three_five())
        three_six_button.clicked.connect(lambda: self.three_six())
        three_seven_button.clicked.connect(lambda: self.three_seven())

        four_zero_button.clicked.connect(lambda: self.four_zero())
        four_one_button.clicked.connect(lambda: self.four_one())
        four_two_button.clicked.connect(lambda: self.four_two())
        four_three_button.clicked.connect(lambda: self.four_three())
        four_four_button.clicked.connect(lambda: self.four_four())
        four_five_button.clicked.connect(lambda: self.four_five())
        four_six_button.clicked.connect(lambda: self.four_six())
        four_seven_button.clicked.connect(lambda: self.four_seven())

        five_zero_button.clicked.connect(lambda: self.five_zero())
        five_one_button.clicked.connect(lambda: self.five_one())
        five_two_button.clicked.connect(lambda: self.five_two())
        five_three_button.clicked.connect(lambda: self.five_three())
        five_four_button.clicked.connect(lambda: self.five_four())
        five_five_button.clicked.connect(lambda: self.five_five())
        five_six_button.clicked.connect(lambda: self.five_six())
        five_seven_button.clicked.connect(lambda: self.five_seven())

        six_zero_button.clicked.connect(lambda: self.six_zero())
        six_one_button.clicked.connect(lambda: self.six_one())
        six_two_button.clicked.connect(lambda: self.six_two())
        six_three_button.clicked.connect(lambda: self.six_three())
        six_four_button.clicked.connect(lambda: self.six_four())
        six_five_button.clicked.connect(lambda: self.six_five())
        six_six_button.clicked.connect(lambda: self.six_six())
        six_seven_button.clicked.connect(lambda: self.six_seven())

        seven_zero_button.clicked.connect(lambda: self.seven_zero())
        seven_one_button.clicked.connect(lambda: self.seven_one())
        seven_two_button.clicked.connect(lambda: self.seven_two())
        seven_three_button.clicked.connect(lambda: self.seven_three())
        seven_four_button.clicked.connect(lambda: self.seven_four())
        seven_five_button.clicked.connect(lambda: self.seven_five())
        seven_six_button.clicked.connect(lambda: self.seven_six())
        seven_seven_button.clicked.connect(lambda: self.seven_seven())

    def timeout(self):
        try:
            self.board.load('./src/res/chess.png')
            self.board = self.board.scaled(800, 800)
            self.pixlabel.setPixmap(self.board)
            f = open('./src/res/log.txt')
            content = f.read()
            f.close()
            self.consolettbox.setText(content)
        except Exception as e:
            logger.log(e)

    def runbtnftn(self):

        target = self.Line1.text()
        pos = self.Line2.text()

        for i in range(len(self.array)):
            for j in range(len(self.array[i])):
                if self.array[i][j] == target:
                    x = i
                    y = j
                    break

        for i in range(len(self.array)):
            for j in range(len(self.array[i])):
                if self.array[i][j] == pos:
                    x2 = i
                    y2 = j
                    break

        if not f'{str(self.array[x][y]).split(":")[0]}:{str(self.array[x][y]).split(":")[1]}' == '0:0':
            self.array[x][y], self.array[int(x2)][int(y2)] = self.array[int(x2)][int(y2)], \
                                                             self.array[x][y]

            rand_str = ''
            for i in range(6):
                rand_str += str(random.choice(string.ascii_lowercase + string.digits))

            self.array[x][y] = f'0:0:{str(rand_str)}'
        else:
            self.array[x][y], self.array[int(x2)][int(y2)] = self.array[int(x2)][int(y2)], \
                                                             self.array[x][y]

        boardprinter.doprint(self.array)
        print('---------------------------------------')
        nextarray = aimove.move(self.array)
        self.array = copy.deepcopy(nextarray)

        chessvisualizer.visual(self.array)
        print('heuristic', heuristic.calculate(self.array))
        logger.log(f'heuristic {heuristic.calculate(self.array)}')

    # ////////////////////////////////////////////////////
    def zero_zero(self):
        self.Line0.setText(f'{str(self.array[0][0])}')

    def zero_one(self):
        self.Line0.setText(f'{str(self.array[0][1])}')

    def zero_two(self):
        self.Line0.setText(f'{str(self.array[0][2])}')

    def zero_three(self):
        self.Line0.setText(f'{str(self.array[0][3])}')

    def zero_four(self):
        self.Line0.setText(f'{str(self.array[0][4])}')

    def zero_five(self):
        self.Line0.setText(f'{str(self.array[0][5])}')

    def zero_six(self):
        self.Line0.setText(f'{str(self.array[0][6])}')

    def zero_seven(self):
        self.Line0.setText(f'{str(self.array[0][7])}')

    # ////////////////////////////////////////////////////
    def one_zero(self):
        self.Line0.setText(f'{str(self.array[1][0])}')

    def one_one(self):
        self.Line0.setText(f'{str(self.array[1][1])}')

    def one_two(self):
        self.Line0.setText(f'{str(self.array[1][2])}')

    def one_three(self):
        self.Line0.setText(f'{str(self.array[1][3])}')

    def one_four(self):
        self.Line0.setText(f'{str(self.array[1][4])}')

    def one_five(self):
        self.Line0.setText(f'{str(self.array[1][5])}')

    def one_six(self):
        self.Line0.setText(f'{str(self.array[1][6])}')

    def one_seven(self):
        self.Line0.setText(f'{str(self.array[1][7])}')

    # ////////////////////////////////////////////////////
    def two_zero(self):
        self.Line0.setText(f'{str(self.array[2][0])}')

    def two_one(self):
        self.Line0.setText(f'{str(self.array[2][1])}')

    def two_two(self):
        self.Line0.setText(f'{str(self.array[2][2])}')

    def two_three(self):
        self.Line0.setText(f'{str(self.array[2][3])}')

    def two_four(self):
        self.Line0.setText(f'{str(self.array[2][4])}')

    def two_five(self):
        self.Line0.setText(f'{str(self.array[2][5])}')

    def two_six(self):
        self.Line0.setText(f'{str(self.array[2][6])}')

    def two_seven(self):
        self.Line0.setText(f'{str(self.array[2][7])}')

    # ////////////////////////////////////////////////////
    def three_zero(self):
        self.Line0.setText(f'{str(self.array[3][0])}')

    def three_one(self):
        self.Line0.setText(f'{str(self.array[3][1])}')

    def three_two(self):
        self.Line0.setText(f'{str(self.array[3][2])}')

    def three_three(self):
        self.Line0.setText(f'{str(self.array[3][3])}')

    def three_four(self):
        self.Line0.setText(f'{str(self.array[3][4])}')

    def three_five(self):
        self.Line0.setText(f'{str(self.array[3][5])}')

    def three_six(self):
        self.Line0.setText(f'{str(self.array[3][6])}')

    def three_seven(self):
        self.Line0.setText(f'{str(self.array[3][7])}')

    # ////////////////////////////////////////////////////
    def four_zero(self):
        self.Line0.setText(f'{str(self.array[4][0])}')

    def four_one(self):
        self.Line0.setText(f'{str(self.array[4][1])}')

    def four_two(self):
        self.Line0.setText(f'{str(self.array[4][2])}')

    def four_three(self):
        self.Line0.setText(f'{str(self.array[4][3])}')

    def four_four(self):
        self.Line0.setText(f'{str(self.array[4][4])}')

    def four_five(self):
        self.Line0.setText(f'{str(self.array[4][5])}')

    def four_six(self):
        self.Line0.setText(f'{str(self.array[4][6])}')

    def four_seven(self):
        self.Line0.setText(f'{str(self.array[4][7])}')

    # ////////////////////////////////////////////////////
    def five_zero(self):
        self.Line0.setText(f'{str(self.array[5][0])}')

    def five_one(self):
        self.Line0.setText(f'{str(self.array[5][1])}')

    def five_two(self):
        self.Line0.setText(f'{str(self.array[5][2])}')

    def five_three(self):
        self.Line0.setText(f'{str(self.array[5][3])}')

    def five_four(self):
        self.Line0.setText(f'{str(self.array[5][4])}')

    def five_five(self):
        self.Line0.setText(f'{str(self.array[5][5])}')

    def five_six(self):
        self.Line0.setText(f'{str(self.array[5][6])}')

    def five_seven(self):
        self.Line0.setText(f'{str(self.array[5][7])}')

    # ////////////////////////////////////////////////////
    def six_zero(self):
        self.Line0.setText(f'{str(self.array[6][0])}')

    def six_one(self):
        self.Line0.setText(f'{str(self.array[6][1])}')

    def six_two(self):
        self.Line0.setText(f'{str(self.array[6][2])}')

    def six_three(self):
        self.Line0.setText(f'{str(self.array[6][3])}')

    def six_four(self):
        self.Line0.setText(f'{str(self.array[6][4])}')

    def six_five(self):
        self.Line0.setText(f'{str(self.array[6][5])}')

    def six_six(self):
        self.Line0.setText(f'{str(self.array[6][6])}')

    def six_seven(self):
        self.Line0.setText(f'{str(self.array[6][7])}')

    # ////////////////////////////////////////////////////
    def seven_zero(self):
        self.Line0.setText(f'{str(self.array[7][0])}')

    def seven_one(self):
        self.Line0.setText(f'{str(self.array[7][1])}')

    def seven_two(self):
        self.Line0.setText(f'{str(self.array[7][2])}')

    def seven_three(self):
        self.Line0.setText(f'{str(self.array[7][3])}')

    def seven_four(self):
        self.Line0.setText(f'{str(self.array[7][4])}')

    def seven_five(self):
        self.Line0.setText(f'{str(self.array[7][5])}')

    def seven_six(self):
        self.Line0.setText(f'{str(self.array[7][6])}')

    def seven_seven(self):
        self.Line0.setText(f'{str(self.array[7][7])}')


if __name__ == "__main__":
    f = open('./src/res/log.txt', 'w')
    f.close()

    app = QApplication(sys.argv)
    gui = QStackedWidget()
    main = ChessGUI(playboard)
    chessvisualizer.visual(playboard)
    gui.addWidget(main)
    gui.setWindowTitle("chess-alone by SHI3DO")
    gui.setWindowIcon(QIcon("./src/chess-ai-python-raspberrypi-logo.png"))
    gui.show()
    gui.setWindowFlag(Qt.WindowMaximizeButtonHint, True)
    app.exec_()
