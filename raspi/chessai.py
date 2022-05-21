from pprint import pprint
import chessrules
import boardprinter
import heuristic
import random
import string
import copy


def chessai(array, color: str):
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
                '''print('바꿀 칸', tmptmptmparray[x][y])  # 이게 바꿀 칸
                print('움직일 말', tmptmptmparray[returnvalarray[k][2][0]][returnvalarray[k][2][1]])  # 이게 움직일 말
                print('------')'''

                if not f'{str(tmptmptmparray[x][y]).split(":")[0]}:{str(tmptmptmparray[x][y]).split(":")[1]}' == '0:0':
                    '''boardprinter.doprint(tmptmptmparray)
                    print('바꿀 칸', tmptmptmparray[x][y])  # 이게 바꿀 칸
                    print('움직일 말', tmptmptmparray[returnvalarray[k][2][0]][returnvalarray[k][2][1]])  # 이게 움직일 말'''

                    tmptmptmparray[x][y], tmptmptmparray[returnvalarray[k][2][0]][returnvalarray[k][2][1]] = \
                        tmptmptmparray[returnvalarray[k][2][0]][returnvalarray[k][2][1]], tmptmptmparray[x][y]

                    rand_str = ''
                    for i in range(6):
                        rand_str += str(random.choice(string.ascii_lowercase + string.digits))

                    tmptmptmparray[returnvalarray[k][2][0]][returnvalarray[k][2][1]] = f'0:0:{str(rand_str)}'

                    '''print('바뀐 칸', tmptmptmparray[x][y])  # 이게 바뀐 칸
                    print('움직여진 말', tmptmptmparray[returnvalarray[k][2][0]][returnvalarray[k][2][1]])  # 이게 움직여진 칸
                    boardprinter.doprint(tmptmptmparray)
                    print('------')'''

                else:
                    tmptmptmparray[x][y], tmptmptmparray[returnvalarray[k][2][0]][returnvalarray[k][2][1]] = \
                        tmptmptmparray[returnvalarray[k][2][0]][returnvalarray[k][2][1]], tmptmptmparray[x][y]

                nextgenarray.append(tmptmptmparray)

    # pprint(returnvalarray)

    # print("------------------\n\n")
    for i in range(0, len(nextgenarray)):
        print(i)
        #boardprinter.doprint(nextgenarray[i])
        print(heuristic.calculate(nextgenarray[i]))
        print("\n\n")
        pass

    return nextgenarray
