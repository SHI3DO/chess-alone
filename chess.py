import createboard
import heuristic
import chessrules
import boardprinter
import chessai

# 보드 만들기
playboard = createboard.create()
boardprinter.doprint(playboard)
print(heuristic.calculate(playboard))


newarray = chessai.chessai(playboard, 'white')

kkkarray = []
for i in range(0, len(newarray)):
    kkkarray.append(chessai.chessai(newarray[i], 'black'))

h = 0
for i in range(0, len(kkkarray)):
    for j in range(0, len(kkkarray[i])):
        h +=1
        print(h)
        boardprinter.doprint(kkkarray[i][j])
#for i in range(1, 4):
    #print(i,  chessrules.wheretogo(playboard, 'black', 'bishop', i))

print(heuristic.calculate(playboard))

