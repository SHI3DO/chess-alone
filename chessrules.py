def wheretogo(array: list, color: str, name: str, identifier: str):
    playerid = f'{color}:{name}:{identifier}'
    x = 0
    y = 0
    for i in range(len(array)):
        for j in range(len(array[i])):
            if array[i][j] == playerid:
                x = i
                y = j
                break

    usearray = []
    if name == 'pawn':
        if y == 0:
            usearray.append(array[x][y + 1])
        elif y == 7:
            usearray.append(array[x][y - 1])
        else:
            usearray.append(array[x][y-1])
            usearray.append(array[x][y+1])

        if x == 0:
            usearray.append(array[x + 1][y])
        elif x == 7:
            usearray.append(array[x-1][y])
        else:
            usearray.append(array[x-1][y])
            usearray.append(array[x+1][y])


    return x, y, usearray
