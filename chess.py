import createboard
import heuristic
import chessrules

# 보드 만들기
playboard = createboard.create()

for i in range(8):
    print(playboard[i])

print(heuristic.calculate(playboard))

print(chessrules.wheretogo(playboard, 'white', 'pawn', '1'))

