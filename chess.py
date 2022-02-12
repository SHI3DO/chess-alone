import createboard
import heuristic
import chessrules

# 보드 만들기
playboard = createboard.create()

for i in range(8):
    print(playboard[i])

print(heuristic.calculate(playboard))


for i in range(1, 8):
    print("white", chessrules.wheretogo(playboard, 'white', 'pawn', i))
print(heuristic.calculate(playboard))

