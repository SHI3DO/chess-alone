import createboard
import heuristic
import chessrules
import boardprinter
import aiuse
from pprint import pprint

# 보드 만들기
playboard = createboard.create()

boardprinter.doprint(playboard)
print(heuristic.calculate(playboard))
print('---------------')

nextarray = aiuse.calc(playboard)

boardprinter.doprint(nextarray)

'''for i in range(1, 3):
    print(i, chessrules.wheretogo(playboard, 'black', 'rook', i))'''
