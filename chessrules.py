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
    # 폰일 경우
    if name == 'pawn':
        # 흰색 말이라면
        if color == 'white':
            # x가 1일때가 처음 시작이라 2칸을 이동할 수 있을 때
            if x == 1:
                if array[x + 1][y] == '0:0':
                    usearray.append(array[x + 1][y])
                if array[x + 2][y] == '0:0':
                    usearray.append(array[x + 2][y])

            # 처음 시작이 아닌 나머지 경우
            else:
                if array[x + 1][y] == '0:0':
                    usearray.append(array[x + 1][y])

            # 대각선
            # 먹을 수 있는 경우
            # 적이 있는지 확인해서 경우의 수에 추가
            if y == 0:
                if array[x + 1][y + 1] != '0:0':
                    if str(array[x + 1][y + 1]).split(':')[0] != 'white':
                        usearray.append(array[x + 1][y + 1])
            elif y == 7:
                if array[x + 1][y - 1] != '0:0':
                    if str(array[x + 1][y - 1]).split(':')[0] != 'white':
                        usearray.append(array[x + 1][y - 1])
            else:
                if array[x + 1][y - 1] != '0:0':
                    if str(array[x + 1][y - 1]).split(':')[0] != 'white':
                        usearray.append(array[x + 1][y - 1])
                if array[x + 1][y + 1] != '0:0':
                    if str(array[x + 1][y + 1]).split(':')[0] != 'white':
                        usearray.append(array[x + 1][y + 1])

        elif color == 'black':
            # x가 1일때가 처음 시작이라 2칸을 이동할 수 있을 때
            if x == 6:
                if array[x - 1][y] == '0:0':
                    usearray.append(array[x - 1][y])
                if array[x - 2][y] == '0:0':
                    usearray.append(array[x - 2][y])

            # 처음 시작이 아닌 나머지 경우
            else:
                if array[x - 1][y] == '0:0':
                    usearray.append(array[x - 1][y])

            # 대각선
            # 먹을 수 있는 경우
            # 적이 있는지 확인해서 경우의 수에 추가
            if y == 0:
                if array[x - 1][y + 1] != '0:0':
                    if str(array[x - 1][y + 1]).split(':')[0] != 'black':
                        usearray.append(array[x - 1][y + 1])
            elif y == 7:
                if array[x - 1][y - 1] != '0:0':
                    if str(array[x - 1][y - 1]).split(':')[0] != 'black':
                        usearray.append(array[x - 1][y - 1])
            else:
                if array[x - 1][y - 1] != '0:0':
                    if str(array[x - 1][y - 1]).split(':')[0] != 'black':
                        usearray.append(array[x - 1][y - 1])
                if array[x - 1][y + 1] != '0:0':
                    if str(array[x - 1][y + 1]).split(':')[0] != 'black':
                        usearray.append(array[x - 1][y + 1])
        else:
            pass

    return usearray
