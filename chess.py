import createboard
import heuristic

turncount = 0

# 보드 만들기
playboard = createboard.create()

for i in range(8):
    print(playboard[i])

print(heuristic.calculate(playboard))
