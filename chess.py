import createboard
import heuristic
import chessrules
import boardprinter

# 보드 만들기
playboard = createboard.create()
boardprinter.doprint(playboard)
print(heuristic.calculate(playboard))


for i in range(1, 9):
    print(i,  chessrules.wheretogo(playboard, 'white', 'pawn', i))
print(heuristic.calculate(playboard))

