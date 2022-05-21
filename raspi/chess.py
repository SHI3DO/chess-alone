import random
import string

import chessvisualizer
import createboard
import heuristic
import chessrules
import boardprinter
import aiuse
import aimove
import copy
from pprint import pprint

# 보드 만들기
playboard = createboard.create()

log = []

'''
def ask(array):
    log.append(array)
    for i in range(0, len(log)):
        print(i)
        boardprinter.doprint(log[i])
    print(heuristic.calculate(array))
    print('어떤 말을 옮기시겠습니까? ::: 말 이름 / 위치(x y)')
    res = input().split(' ')
    for i in range(len(array)):
        for j in range(len(array[i])):
            if array[i][j] == res[0]:
                x = i
                y = j
                break

    if not f'{str(array[x][y]).split(":")[0]}:{str(array[x][y]).split(":")[1]}' == '0:0':
        array[x][y], array[int(res[1])][int(res[2])] = array[int(res[1])][int(res[2])], array[x][y]

        rand_str = ''
        for i in range(6):
            rand_str += str(random.choice(string.ascii_lowercase + string.digits))

        array[x][y] = f'0:0:{str(rand_str)}'
    else:
        array[x][y], array[int(res[1])][int(res[2])] = array[int(res[1])][int(res[2])], array[x][y]

    nextarray = aimove.move(array)

    ask(nextarray)


ask(playboard)
'''

boardprinter.doprint(playboard)
for i in range(1, 5):
    print(i, chessrules.wheretogo(playboard, 'white', 'king', i))
