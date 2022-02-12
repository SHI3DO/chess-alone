import chessentity
import createboard
import heuristic

# 보드 만들기
playboard = createboard.create()

for i in range(8):
    print(playboard[i])

heuristic.calculate(playboard)
