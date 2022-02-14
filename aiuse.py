import os
import boardprinter
import chessai
import heuristic
from pprint import pprint


def cls():
    os.system('cls' if os.name == 'nt' else 'clear')


def calc(playboard):
    counter = []
    c = 0
    secondarray = []
    secondarray = chessai.chessai(playboard, 'white')

    print('first turn')
    thirdarray = []
    for i in range(0, len(secondarray)):
        c += 1
        if c % 1000 == 999:
            print(c)
        thirdarray.append(chessai.chessai(secondarray[i], 'black'))

    cls()
    counter.append(c)
    c = 0
    print('second turn')
    fourtharray = []
    for i in range(0, len(thirdarray)):
        for j in range(0, len(thirdarray[i])):
            c += 1
            if c % 1000 == 999:
                print(c)
            fourtharray.append(chessai.chessai(thirdarray[i][j], 'white'))
    cls()
    counter.append(c)
    c = 0

    print('third turn')
    fiftharray = []
    for i in range(0, len(fourtharray)):
        for j in range(0, len(fourtharray[i])):
            c += 1
            if c % 1000 == 999:
                print(c)
            fiftharray.append(chessai.chessai(fourtharray[i][j], 'black'))
    cls()
    counter.append(c)
    c = 0

    '''
    print('fourth turn')
    sixtharray = []
    for i in range(0, len(fiftharray)):
        for j in range(0, len(fiftharray[i])):
            c += 1
            if c%1000==999:
                print(c)
            sixtharray.append(chessai.chessai(fiftharray[i][j], 'white'))
    cls()
    counter.append(c)
    c = 0
    '''

    for i in range(0, len(counter)):
        print(counter[i])

    # boardprinter.ver2doprint(fiftharray)

    print('calculating score for each turn')

    heuristicarray = []
    for i in range(0, len(fiftharray)):
        for j in range(0, len(fiftharray[i])):
            c += 1
            if c % 1000 == 999:
                print(c)
            heuristicarray.append(heuristic.calculate(fiftharray[i][j]))

    c = 0

    pprint(heuristicarray)
    f = open('./log.txt','w')
    f.write(str(heuristicarray))

    #boardprinter.ver2doprint(fiftharray)
