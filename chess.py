import createboard
import heuristic
import chessrules
import boardprinter

# 보드 만들기
playboard = createboard.create()
boardprinter.doprint(playboard)
print(heuristic.calculate(playboard))


for i in range(1, 4):
    print(i,  chessrules.wheretogo(playboard, 'black', 'bishop', i))
print(heuristic.calculate(playboard))

