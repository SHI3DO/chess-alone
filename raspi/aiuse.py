import os
import boardprinter
import chessai
import heuristic
from pprint import pprint
import copy

import logger


def cls():
    f = open('./src/res/log.txt', 'w')
    f.close()


def calc(playboard):
    counter = []
    c = 0
    secondarray = []
    secondarray = chessai.chessai(playboard, 'white')

    logger.log('first turn')
    thirdarray = []
    thirdarrayinput = []
    for i in range(0, len(secondarray)):
        c += 1
        if c % 1000 == 999:
            logger.log(c)
        thirdarray.append(chessai.chessai(secondarray[i], 'black'))
        thirdarrayinput.append(secondarray[i])

    cls()
    counter.append(c)
    c = 0
    logger.log('second turn')
    fourtharray = []
    fourtharrayinput = []
    for i in range(0, len(thirdarray)):
        for j in range(0, len(thirdarray[i])):
            c += 1
            if c % 1000 == 999:
                logger.log(c)
            fourtharray.append(chessai.chessai(thirdarray[i][j], 'white'))
            fourtharrayinput.append(thirdarray[i][j])
    cls()
    counter.append(c)
    c = 0

    logger.log('third turn')
    fiftharray = []
    fiftharrayinput = []
    for i in range(0, len(fourtharray)):
        for j in range(0, len(fourtharray[i])):
            c += 1
            if c % 1000 == 999:
                logger.log(c)
            fiftharray.append(chessai.chessai(fourtharray[i][j], 'black'))
            fiftharrayinput.append(fourtharray[i][j])

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
        logger.log(counter[i])

    # boardprinter.ver2doprint(fiftharray)

    print('calculating score for each turn')
    logger.log('calculating score for each turn')

    heuristicarray = []
    heuristicarraycounter = []
    sizeheuristicarray = []
    blacksizeheuristicarray = []
    for i in range(0, len(fiftharray)):
        for j in range(0, len(fiftharray[i])):
            c += 1
            heuristicarray.append(heuristic.calculate(fiftharray[i][j]))
            heuristicarraycounter.append([i, j])

    print(c, 'cases')
    logger.log(f'{c} cases')
    c = 0
    cls()

    for i in range(0, len(heuristicarray)):
        sizeheuristicarray.append(heuristicarray[i][0])
        blacksizeheuristicarray.append(heuristicarray[i][1])

    cls()
    print('calculating max benefit for white')
    logger.log('calculating max benefit for white')
    if len(sizeheuristicarray) > 0:
        maxheu = max(sizeheuristicarray)
        print('calculating min benefit for black')
        logger.log('calculating min benefit for black')
    else:
        print(sizeheuristicarray)

    if len(blacksizeheuristicarray) > 0:
        minheu = max(blacksizeheuristicarray)
    else:
        print(blacksizeheuristicarray)

    print('max', maxheu)
    logger.log(f'max {maxheu}')
    print('min', minheu)
    logger.log(f'min {minheu}')

    # 봇의 이득이 최고가 되는 경우
    maxarray = []
    for i in range(0, len(heuristicarray)):
        if heuristicarray[i][0] == maxheu:
            maxarray.append(heuristicarray[i])

    # 가능하다면 상대의 이득은 최소가 되게
    resarray = []
    for i in range(0, len(maxarray)):
        if maxarray[i][1] == minheu:
            c += 1
            resarray.append(maxarray[i])

    # 만약 이득이 있는 경우중 상대의 이득이 최소가 될 수 있는 경우가 없다면
    if c < 1:
        resarray.append(maxarray[0])

    print(resarray[0])

    c = 0

    print('finding upper tree array')
    for i in range(len(heuristicarray)):
        if heuristicarray[i] == resarray[0]:
            c = i
            break

    print('num', heuristicarraycounter[c])
    print(c)

    upperarray = copy.deepcopy(fiftharray[heuristicarraycounter[c][0]][heuristicarraycounter[c][1]])
    print(heuristic.calculate(upperarray))
    #boardprinter.doprint(upperarray)
    print('----------')

    loc = []
    for i in range(0, len(fiftharray)):
        for j in range(0, len(fiftharray[i])):
            if fiftharray[i][j] == upperarray:
                loc.append(i)
                break

    #boardprinter.doprint((fiftharrayinput[loc[0]]))
    previousarray = copy.deepcopy(fiftharrayinput[loc[0]])


    loc.clear()
    for i in range(0, len(fourtharray)):
        for j in range(0, len(fourtharray[i])):
            if fourtharray[i][j] == previousarray:
                loc.append(i)
                break

    #boardprinter.doprint(fourtharrayinput[loc[0]])
    previousarray.clear()

    previousarray = copy.deepcopy(fourtharrayinput[loc[0]])

    loc.clear()
    for i in range(0, len(thirdarray)):
        for j in range(0, len(thirdarray[i])):
            if thirdarray[i][j] == previousarray:
                loc.append(i)
                break

    boardprinter.doprint(thirdarrayinput[loc[0]])
    previousarray.clear()
    previousarray = copy.deepcopy(thirdarrayinput[loc[0]])

    # pprint(heuristicarray)
    #f = open('./log.txt', 'w')
    #f.write(str(heuristicarray))

    return previousarray
