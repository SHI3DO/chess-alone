from pprint import pprint
import chessrules
import boardprinter
import heuristic
import copy


def chessai(array, color:str):
    nextgenarray = []

    myplayer = []
    for i in range(len(array)):
        for j in range(len(array[i])):
            if str(array[i][j]).split(':')[0] == color:
                myplayer.append(array[i][j])

    returnvalarray = []
    for i in range(0, len(myplayer)):
        tmparray = []
        tmparray.append(myplayer[i])
        tmparray.append(chessrules.wheretogo(array, str(myplayer[i]).split(':')[0], str(myplayer[i]).split(':')[1],
                                             str(myplayer[i]).split(':')[2]))
        returnvalarray.append(tmparray)

    for k in range(0, len(returnvalarray)):
        playerid = returnvalarray[k][0]
        x = 0
        y = 0
        for i in range(len(array)):
            for j in range(len(array[i])):
                if array[i][j] == playerid:
                    x = i
                    y = j
                    break

        returnvalarray[k].append([x, y])

    for k in range(0, len(returnvalarray)):
        if len(returnvalarray[k][1]) > 0:
            # 각각
            for j in range(0, len(returnvalarray[k][1])):
                playerid = returnvalarray[k][1][j]
                x = 0
                y = 0
                for i in range(len(array)):
                    for j in range(len(array[i])):
                        if array[i][j] == playerid:
                            x = i
                            y = j
                            break

                tmptmptmparray = copy.deepcopy(array)

                tmptmptmparray[x][y], tmptmptmparray[returnvalarray[k][2][0]][returnvalarray[k][2][1]] = \
                    tmptmptmparray[returnvalarray[k][2][0]][returnvalarray[k][2][1]], tmptmptmparray[x][y]

                nextgenarray.append(tmptmptmparray)
                print("\n\n")

    pprint(returnvalarray)

    print("------------------\n\n")
    for i in range(0, len(nextgenarray)):
        print(i)
        boardprinter.doprint(nextgenarray[i])
        print(heuristic.calculate(nextgenarray[i]))
        print("\n\n")

    return nextgenarray




