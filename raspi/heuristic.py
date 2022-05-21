import chessentity


def calculate(array: list):
    returnarray = []
    blackscore = 0
    whitescore = 0
    for i in range(len(array)):
        for j in range(len(array[i])):
            tmparray = str(array[i][j]).split(':')
            score = chessentity.score(tmparray[0], tmparray[1])
            if tmparray[0] == 'white':
                whitescore += score
            elif tmparray[0] == 'black':
                blackscore += score
            else:
                pass

    returnarray.append(whitescore)
    returnarray.append(blackscore)
    return returnarray
