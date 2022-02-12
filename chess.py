import createboard
import heuristic
import chessrules

turncount = 0

# 보드 만들기
playboard = createboard.create()

for i in range(8):
    print(playboard[i])

print(heuristic.calculate(playboard))

print(chessrules.wheretogo(playboard, 'white', 'pawn', '8'))
print(chessrules.wheretogo(playboard, 'white', 'pawn', '5'))
print(chessrules.wheretogo(playboard, 'white', 'pawn', '6'))
