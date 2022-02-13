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




secondarray = []
t = 0
for i in range(0, len(kkkarray)):
    for j in range(0, len(kkkarray[i])):
        secondarray.append(chessai.chessai(kkkarray[i][j], 'white'))

h = 0
for i in range(0, len(kkkarray)):
    for j in range(0, len(kkkarray[i])):
        h+=1
        #print(h)
        #boardprinter.doprint(kkkarray[i][j])

print('h', h)

t = 0
for i in range(0, len(secondarray)):
    for j in range(0, len(secondarray[i])):
        for h in range(0, len(secondarray[i][j])):
            t +=1
            #print('t', t)
            #boardprinter.doprint(secondarray[i][j])

print('t', t)

#for i in range(1, 4):
    #print(i,  chessrules.wheretogo(playboard, 'black', 'bishop', i))

print(len(kkkarray))

print(heuristic.calculate(playboard))

