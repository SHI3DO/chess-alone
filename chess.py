import createboard
import heuristic
import chessrules
import boardprinter
import chessai
from pprint import pprint

# 보드 만들기
playboard = createboard.create()


boardprinter.doprint(playboard)
print(heuristic.calculate(playboard))
print('---------------')
counter = []
c = 0
secondarray = []
secondarray = chessai.chessai(playboard, 'white')


thirdarray = []
for i in range(0, len(secondarray)):
    c+=1
    thirdarray.append(chessai.chessai(secondarray[i], 'black'))

counter.append(c)
c=0

fourtharray = []
for i in range(0, len(thirdarray)):
    for j in range(0, len(thirdarray[i])):
        c+=1
        fourtharray.append(chessai.chessai(thirdarray[i][j], 'white'))
counter.append(c)
c=0

fiftharray = []
for i in range(0, len(fourtharray)):
    for j in range(0, len(fourtharray[i])):
        c+=1
        fiftharray.append(chessai.chessai(fourtharray[i][j], 'black'))
counter.append(c)
c=0

for i in range(0,len(counter)):
    print(counter[i])


boardprinter.doprint(fiftharray[0][0])










#for i in range(1, 4):
    #print(i,  chessrules.wheretogo(playboard, 'black', 'bishop', i))


