import logger


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
            if x < 7:
                if x == 1:
                    if f'{str(array[x + 1][y]).split(":")[0]}:{str(array[x + 1][y]).split(":")[1]}' == '0:0':
                        usearray.append(array[x + 1][y])
                        if f'{str(array[x + 2][y]).split(":")[0]}:{str(array[x + 2][y]).split(":")[1]}' == '0:0':
                            usearray.append(array[x + 2][y])

                # 처음 시작이 아닌 나머지 경우
                else:
                    if f'{str(array[x + 1][y]).split(":")[0]}:{str(array[x + 1][y]).split(":")[1]}' == '0:0':
                        usearray.append(array[x + 1][y])

                # 대각선
                # 먹을 수 있는 경우
                # 적이 있는지 확인해서 경우의 수에 추가
                if y == 0:
                    if f'{str(array[x + 1][y + 1]).split(":")[0]}:{str(array[x + 1][y + 1]).split(":")[1]}' != '0:0':
                        if str(array[x + 1][y + 1]).split(':')[0] != 'white':
                            usearray.append(array[x + 1][y + 1])
                elif y == 7:
                    if f'{str(array[x + 1][y - 1]).split(":")[0]}:{str(array[x + 1][y - 1]).split(":")[1]}' != '0:0':
                        if str(array[x + 1][y - 1]).split(':')[0] != 'white':
                            usearray.append(array[x + 1][y - 1])
                else:
                    if f'{str(array[x + 1][y - 1]).split(":")[0]}:{str(array[x + 1][y - 1]).split(":")[1]}' != '0:0':
                        if str(array[x + 1][y - 1]).split(':')[0] != 'white':
                            usearray.append(array[x + 1][y - 1])

                    if f'{str(array[x + 1][y + 1]).split(":")[0]}:{str(array[x + 1][y + 1]).split(":")[1]}' != '0:0':
                        if str(array[x + 1][y + 1]).split(':')[0] != 'white':
                            usearray.append(array[x + 1][y + 1])

        elif color == 'black':
            # x가 1일때가 처음 시작이라 2칸을 이동할 수 있을 때
            if x > 0:
                if x == 6:
                    if f'{str(array[x - 1][y]).split(":")[0]}:{str(array[x - 1][y]).split(":")[1]}' == '0:0':
                        usearray.append(array[x - 1][y])
                        if f'{str(array[x - 2][y]).split(":")[0]}:{str(array[x - 2][y]).split(":")[1]}' == '0:0':
                            usearray.append(array[x - 2][y])

                # 처음 시작이 아닌 나머지 경우
                else:
                    if f'{str(array[x - 1][y]).split(":")[0]}:{str(array[x - 1][y]).split(":")[1]}' == '0:0':
                        usearray.append(array[x - 1][y])

                # 대각선
                # 먹을 수 있는 경우
                # 적이 있는지 확인해서 경우의 수에 추가
                if y == 0:
                    if f'{str(array[x - 1][y + 1]).split(":")[0]}:{str(array[x - 1][y + 1]).split(":")[1]}' != '0:0':
                        if str(array[x - 1][y + 1]).split(':')[0] != 'black':
                            usearray.append(array[x - 1][y + 1])
                elif y == 7:
                    if f'{str(array[x - 1][y - 1]).split(":")[0]}:{str(array[x - 1][y - 1]).split(":")[1]}' != '0:0':
                        if str(array[x - 1][y - 1]).split(':')[0] != 'black':
                            usearray.append(array[x - 1][y - 1])
                else:
                    if f'{str(array[x - 1][y - 1]).split(":")[0]}:{str(array[x - 1][y - 1]).split(":")[1]}' != '0:0':
                        if str(array[x - 1][y - 1]).split(':')[0] != 'black':
                            usearray.append(array[x - 1][y - 1])
                    if f'{str(array[x - 1][y + 1]).split(":")[0]}:{str(array[x - 1][y + 1]).split(":")[1]}' != '0:0':
                        if str(array[x - 1][y + 1]).split(':')[0] != 'black':
                            usearray.append(array[x - 1][y + 1])
        else:
            logger.log('something went wrong')

    # 나이트일 경우
    elif name == 'knight':
        # 흰색 이라면
        if color == 'white':
            if x <= 5:
                if y < 7:
                    if f'{str(array[x + 2][y + 1]).split(":")[0]}:{str(array[x + 2][y + 1]).split(":")[1]}' == '0:0':
                        usearray.append(array[x + 2][y + 1])
                    elif f'{str(array[x + 2][y + 1]).split(":")[0]}:{str(array[x + 2][y + 1]).split(":")[1]}' != '0:0':
                        if str(array[x + 2][y + 1]).split(':')[0] == 'black':
                            usearray.append(array[x + 2][y + 1])
                        else:
                            pass
                    else:
                        pass

                if y > 0:
                    if f'{str(array[x + 2][y - 1]).split(":")[0]}:{str(array[x + 2][y - 1]).split(":")[1]}' == '0:0':
                        usearray.append(array[x + 2][y - 1])
                    elif f'{str(array[x + 2][y - 1]).split(":")[0]}:{str(array[x + 2][y - 1]).split(":")[1]}' != '0:0':
                        if str(array[x + 2][y - 1]).split(':')[0] == 'black':
                            usearray.append(array[x + 2][y - 1])
                        else:
                            pass
                    else:
                        pass

            if x >= 2:
                if y < 7:
                    if f'{str(array[x - 2][y + 1]).split(":")[0]}:{str(array[x - 2][y + 1]).split(":")[1]}' == '0:0':
                        usearray.append(array[x - 2][y + 1])
                    elif f'{str(array[x - 2][y + 1]).split(":")[0]}:{str(array[x - 2][y + 1]).split(":")[1]}' != '0:0':
                        if str(array[x - 2][y + 1]).split(':')[0] == 'black':
                            usearray.append(array[x - 2][y + 1])
                        else:
                            pass
                    else:
                        pass

                if y > 0:
                    if f'{str(array[x - 2][y - 1]).split(":")[0]}:{str(array[x - 2][y - 1]).split(":")[1]}' == '0:0':
                        usearray.append(array[x - 2][y - 1])
                    elif f'{str(array[x - 2][y - 1]).split(":")[0]}:{str(array[x - 2][y - 1]).split(":")[1]}' != '0:0':
                        if str(array[x - 2][y - 1]).split(':')[0] == 'black':
                            usearray.append(array[x - 2][y - 1])
                        else:
                            pass
                    else:
                        pass

            if x <= 1:
                if y < 7:
                    if f'{str(array[x + 2][y + 1]).split(":")[0]}:{str(array[x + 2][y + 1]).split(":")[1]}' == '0:0':
                        usearray.append(array[x + 2][y + 1])
                    elif f'{str(array[x + 2][y + 1]).split(":")[0]}:{str(array[x + 2][y + 1]).split(":")[1]}' != '0:0':
                        if str(array[x + 2][y + 1]).split(':')[0] == 'black':
                            usearray.append(array[x + 2][y + 1])
                        else:
                            pass
                    else:
                        pass

                if y > 0:
                    if f'{str(array[x + 2][y - 1]).split(":")[0]}:{str(array[x + 2][y - 1]).split(":")[1]}' == '0:0':
                        usearray.append(array[x + 2][y - 1])
                    elif f'{str(array[x + 2][y - 1]).split(":")[0]}:{str(array[x + 2][y - 1]).split(":")[1]}' != '0:0':
                        if str(array[x + 2][y - 1]).split(':')[0] == 'black':
                            usearray.append(array[x + 2][y - 1])
                        else:
                            pass
                    else:
                        pass

            if x >= 6:
                if y < 7:
                    if f'{str(array[x - 2][y + 1]).split(":")[0]}:{str(array[x - 2][y + 1]).split(":")[1]}' == '0:0':
                        usearray.append(array[x - 2][y + 1])
                    elif f'{str(array[x - 2][y + 1]).split(":")[0]}:{str(array[x - 2][y + 1]).split(":")[1]}' != '0:0':
                        if str(array[x - 2][y + 1]).split(':')[0] == 'black':
                            usearray.append(array[x - 2][y + 1])
                        else:
                            pass
                    else:
                        pass

                if y > 0:
                    if f'{str(array[x - 2][y - 1]).split(":")[0]}:{str(array[x - 2][y - 1]).split(":")[1]}' == '0:0':
                        usearray.append(array[x - 2][y - 1])
                    elif f'{str(array[x - 2][y - 1]).split(":")[0]}:{str(array[x - 2][y - 1]).split(":")[1]}' != '0:0':
                        if str(array[x - 2][y - 1]).split(':')[0] == 'black':
                            usearray.append(array[x - 2][y - 1])
                        else:
                            pass
                    else:
                        pass

            if y >= 2:
                if x > 0:
                    if f'{str(array[x - 1][y - 2]).split(":")[0]}:{str(array[x - 1][y - 2]).split(":")[1]}' == '0:0':
                        usearray.append(array[x - 1][y - 2])
                    elif f'{str(array[x - 1][y - 2]).split(":")[0]}:{str(array[x - 1][y - 2]).split(":")[1]}' != '0:0':
                        if str(array[x - 1][y - 2]).split(':')[0] == 'black':
                            usearray.append(array[x - 1][y - 2])
                        else:
                            pass
                    else:
                        pass

                if x < 7:
                    if f'{str(array[x + 1][y - 2]).split(":")[0]}:{str(array[x + 1][y - 2]).split(":")[1]}' == '0:0':
                        usearray.append(array[x + 1][y - 2])
                    elif f'{str(array[x + 1][y - 2]).split(":")[0]}:{str(array[x + 1][y - 2]).split(":")[1]}' != '0:0':
                        if str(array[x + 1][y - 2]).split(':')[0] == 'black':
                            usearray.append(array[x + 1][y - 2])
                        else:
                            pass
                    else:
                        pass

            if y <= 5:
                if x > 0:
                    if f'{str(array[x - 1][y + 2]).split(":")[0]}:{str(array[x - 1][y + 2]).split(":")[1]}' == '0:0':
                        usearray.append(array[x - 1][y + 2])
                    elif f'{str(array[x - 1][y + 2]).split(":")[0]}:{str(array[x - 1][y + 2]).split(":")[1]}' != '0:0':
                        if str(array[x - 1][y + 2]).split(':')[0] == 'black':
                            usearray.append(array[x - 1][y + 2])
                        else:
                            pass
                    else:
                        pass

                if x < 7:
                    if f'{str(array[x + 1][y + 2]).split(":")[0]}:{str(array[x + 1][y + 2]).split(":")[1]}' == '0:0':
                        usearray.append(array[x + 1][y + 2])
                    elif f'{str(array[x + 1][y + 2]).split(":")[0]}:{str(array[x + 1][y + 2]).split(":")[1]}' != '0:0':
                        if str(array[x + 1][y + 2]).split(':')[0] == 'black':
                            usearray.append(array[x + 1][y + 2])
                        else:
                            pass
                    else:
                        pass

            if y <= 1:
                if x > 0:
                    if f'{str(array[x - 1][y + 2]).split(":")[0]}:{str(array[x - 1][y + 2]).split(":")[1]}' == '0:0':
                        usearray.append(array[x - 1][y + 2])
                    elif f'{str(array[x - 1][y + 2]).split(":")[0]}:{str(array[x - 1][y + 2]).split(":")[1]}' != '0:0':
                        if str(array[x - 1][y + 2]).split(':')[0] == 'black':
                            usearray.append(array[x - 1][y + 2])
                        else:
                            pass
                    else:
                        pass

                if x < 7:
                    if f'{str(array[x + 1][y + 2]).split(":")[0]}:{str(array[x + 1][y + 2]).split(":")[1]}' == '0:0':
                        usearray.append(array[x + 1][y + 2])
                    elif f'{str(array[x + 1][y + 2]).split(":")[0]}:{str(array[x + 1][y + 2]).split(":")[1]}' != '0:0':
                        if str(array[x + 1][y + 2]).split(':')[0] == 'black':
                            usearray.append(array[x + 1][y + 2])
                        else:
                            pass
                    else:
                        pass
            if y >= 6:
                if x > 0:
                    if f'{str(array[x - 1][y - 2]).split(":")[0]}:{str(array[x - 1][y - 2]).split(":")[1]}' == '0:0':
                        usearray.append(array[x - 1][y - 2])
                    elif f'{str(array[x - 1][y - 2]).split(":")[0]}:{str(array[x - 1][y - 2]).split(":")[1]}' != '0:0':
                        if str(array[x - 1][y - 2]).split(':')[0] == 'black':
                            usearray.append(array[x - 1][y - 2])
                        else:
                            pass
                    else:
                        pass

                if x < 7:
                    if f'{str(array[x + 1][y - 2]).split(":")[0]}:{str(array[x + 1][y - 2]).split(":")[1]}' == '0:0':
                        usearray.append(array[x + 1][y - 2])
                    elif f'{str(array[x + 1][y - 2]).split(":")[0]}:{str(array[x + 1][y - 2]).split(":")[1]}' != '0:0':
                        if str(array[x + 1][y - 2]).split(':')[0] == 'black':
                            usearray.append(array[x + 1][y - 2])
                        else:
                            pass
                    else:
                        pass

        # 검정이라면
        elif color == 'black':
            if x <= 5:
                if y < 7:
                    if f'{str(array[x + 2][y + 1]).split(":")[0]}:{str(array[x + 2][y + 1]).split(":")[1]}' == '0:0':
                        usearray.append(array[x + 2][y + 1])
                    elif f'{str(array[x + 2][y + 1]).split(":")[0]}:{str(array[x + 2][y + 1]).split(":")[1]}' != '0:0':
                        if str(array[x + 2][y + 1]).split(':')[0] == 'white':
                            usearray.append(array[x + 2][y + 1])
                        else:
                            pass
                    else:
                        pass

                if y > 0:
                    if f'{str(array[x + 2][y - 1]).split(":")[0]}:{str(array[x + 2][y - 1]).split(":")[1]}' == '0:0':
                        usearray.append(array[x + 2][y - 1])
                    elif f'{str(array[x + 2][y - 1]).split(":")[0]}:{str(array[x + 2][y - 1]).split(":")[1]}' != '0:0':
                        if str(array[x + 2][y - 1]).split(':')[0] == 'white':
                            usearray.append(array[x + 2][y - 1])
                        else:
                            pass
                    else:
                        pass

            if x >= 2:
                if y < 7:
                    if f'{str(array[x - 2][y + 1]).split(":")[0]}:{str(array[x - 2][y + 1]).split(":")[1]}' == '0:0':
                        usearray.append(array[x - 2][y + 1])
                    elif f'{str(array[x - 2][y + 1]).split(":")[0]}:{str(array[x - 2][y + 1]).split(":")[1]}' != '0:0':
                        if str(array[x - 2][y + 1]).split(':')[0] == 'white':
                            usearray.append(array[x - 2][y + 1])
                        else:
                            pass
                    else:
                        pass

                if y > 0:
                    if f'{str(array[x - 2][y - 1]).split(":")[0]}:{str(array[x - 2][y - 1]).split(":")[1]}' == '0:0':
                        usearray.append(array[x - 2][y - 1])
                    elif f'{str(array[x - 2][y - 1]).split(":")[0]}:{str(array[x - 2][y - 1]).split(":")[1]}' != '0:0':
                        if str(array[x - 2][y - 1]).split(':')[0] == 'white':
                            usearray.append(array[x - 2][y - 1])
                        else:
                            pass
                    else:
                        pass

            if y >= 2:
                if x > 0:
                    if f'{str(array[x - 1][y - 2]).split(":")[0]}:{str(array[x - 1][y - 2]).split(":")[1]}' == '0:0':
                        usearray.append(array[x - 1][y - 2])
                    elif f'{str(array[x - 1][y - 2]).split(":")[0]}:{str(array[x - 1][y - 2]).split(":")[1]}' != '0:0':
                        if str(array[x - 1][y - 2]).split(':')[0] == 'white':
                            usearray.append(array[x - 1][y - 2])
                        else:
                            pass
                    else:
                        pass

                if x < 7:
                    if f'{str(array[x + 1][y - 2]).split(":")[0]}:{str(array[x + 1][y - 2]).split(":")[1]}' == '0:0':
                        usearray.append(array[x + 1][y - 2])
                    elif f'{str(array[x + 1][y - 2]).split(":")[0]}:{str(array[x + 1][y - 2]).split(":")[1]}' != '0:0':
                        if str(array[x + 1][y - 2]).split(':')[0] == 'white':
                            usearray.append(array[x + 1][y - 2])
                        else:
                            pass
                    else:
                        pass

            if y <= 5:
                if x > 0:
                    if f'{str(array[x - 1][y + 2]).split(":")[0]}:{str(array[x - 1][y + 2]).split(":")[1]}' == '0:0':
                        usearray.append(array[x - 1][y + 2])
                    elif f'{str(array[x - 1][y + 2]).split(":")[0]}:{str(array[x - 1][y + 2]).split(":")[1]}' != '0:0':
                        if str(array[x - 1][y + 2]).split(':')[0] == 'white':
                            usearray.append(array[x - 1][y + 2])
                        else:
                            pass
                    else:
                        pass

                if x < 7:
                    if f'{str(array[x + 1][y + 2]).split(":")[0]}:{str(array[x + 1][y + 2]).split(":")[1]}' == '0:0':
                        usearray.append(array[x + 1][y + 2])
                    elif f'{str(array[x + 1][y + 2]).split(":")[0]}:{str(array[x + 1][y + 2]).split(":")[1]}' != '0:0':
                        if str(array[x + 1][y + 2]).split(':')[0] == 'white':
                            usearray.append(array[x + 1][y + 2])
                        else:
                            pass
                    else:
                        pass

    elif name == 'bishop':
        # 흰색일때
        if color == 'white':
            downloopx = 7 - x
            uploopx = x
            rightloopy = 7 - y
            leftloopy = y
            rightdown = []
            rightup = []
            leftdown = []
            leftup = []

            # 오른쪽 아래 방향 카운트해서 배열에 넣기
            for num in range(1, min(rightloopy, downloopx) + 1):
                rightdown.append(array[x + num][y + num])

            # 오른쪽 위 방향
            for num in range(1, min(rightloopy, uploopx) + 1):
                rightup.append(array[x - num][y + num])

            # 왼쪽 아래 방향
            for num in range(1, min(leftloopy, downloopx) + 1):
                leftdown.append(array[x + num][y - num])

            # 왼쪽 위 방향
            for num in range(1, min(leftloopy, uploopx) + 1):
                leftup.append(array[x - num][y - num])

            for i in range(0, len(rightup)):
                if str(rightup[i]).split(':')[0] != 'white':
                    usearray.append(rightup[i])
                    if str(rightup[i]).split(':')[0] == 'black':
                        break
                else:
                    break

            for i in range(0, len(rightdown)):
                if str(rightdown[i]).split(':')[0] != 'white':
                    usearray.append(rightdown[i])
                    if str(rightdown[i]).split(':')[0] == 'black':
                        break
                else:
                    break

            for i in range(0, len(leftup)):
                if str(leftup[i]).split(':')[0] != 'white':
                    usearray.append(leftup[i])
                    if str(leftup[i]).split(':')[0] == 'black':
                        break
                else:
                    break

            for i in range(0, len(leftdown)):
                if str(leftdown[i]).split(':')[0] != 'white':
                    usearray.append(leftdown[i])
                    if str(leftdown[i]).split(':')[0] == 'black':
                        break
                else:
                    break

        elif color == 'black':
            downloopx = 7 - x
            uploopx = x
            rightloopy = 7 - y
            leftloopy = y
            rightdown = []
            rightup = []
            leftdown = []
            leftup = []

            # 오른쪽 아래 방향 카운트해서 배열에 넣기
            for num in range(1, min(rightloopy, downloopx) + 1):
                rightdown.append(array[x + num][y + num])

            # 오른쪽 위 방향
            for num in range(1, min(rightloopy, uploopx) + 1):
                rightup.append(array[x - num][y + num])

            # 왼쪽 아래 방향
            for num in range(1, min(leftloopy, downloopx) + 1):
                leftdown.append(array[x + num][y - num])

            # 왼쪽 위 방향
            for num in range(1, min(leftloopy, uploopx) + 1):
                leftup.append(array[x - num][y - num])

            for i in range(0, len(rightup)):
                if str(rightup[i]).split(':')[0] != 'black':
                    usearray.append(rightup[i])
                    if str(rightup[i]).split(':')[0] == 'white':
                        break
                else:
                    break

            for i in range(0, len(rightdown)):
                if str(rightdown[i]).split(':')[0] != 'black':
                    usearray.append(rightdown[i])
                    if str(rightdown[i]).split(':')[0] == 'white':
                        break
                else:
                    break

            for i in range(0, len(leftup)):
                if str(leftup[i]).split(':')[0] != 'black':
                    usearray.append(leftup[i])
                    if str(leftup[i]).split(':')[0] == 'white':
                        break
                else:
                    break

            for i in range(0, len(leftdown)):
                if str(leftdown[i]).split(':')[0] != 'black':
                    usearray.append(leftdown[i])
                    if str(leftdown[i]).split(':')[0] == 'white':
                        break
                else:
                    break
        else:
            logger.log('something went wrong')

    elif name == 'rook':
        if color == 'white':
            downloopx = 7 - x
            uploopx = x
            rightloopy = 7 - y
            leftloopy = y
            up = []
            down = []
            right = []
            left = []

            # 오른쪽
            for num in range(1, rightloopy + 1):
                right.append(array[x][y + num])

            # 왼쪽
            for num in range(1, leftloopy + 1):
                left.append(array[x][y-num])

            # 위쪽
            for num in range(1, uploopx + 1):
                up.append(array[x - num][y])

            # 아래쪽
            for num in range(1, downloopx + 1):
                down.append(array[x + num][y])

            for i in range(0, len(right)):
                if str(right[i]).split(':')[0] != 'white':
                    usearray.append(right[i])
                    if str(right[i]).split(':')[0] == 'black':
                        break
                else:
                    break

            for i in range(0, len(left)):
                if str(left[i]).split(':')[0] != 'white':
                    usearray.append(left[i])
                    if str(left[i]).split(':')[0] == 'black':
                        break
                else:
                    break

            for i in range(0, len(up)):
                if str(up[i]).split(':')[0] != 'white':
                    usearray.append(up[i])
                    if str(up[i]).split(':')[0] == 'black':
                        break
                else:
                    break

            for i in range(0, len(down)):
                if str(down[i]).split(':')[0] != 'white':
                    usearray.append(down[i])
                    if str(down[i]).split(':')[0] == 'black':
                        break
                else:
                    break

        elif color == 'black':
            downloopx = 7 - x
            uploopx = x
            rightloopy = 7 - y
            leftloopy = y
            up = []
            down = []
            right = []
            left = []

            # 오른쪽
            for num in range(1, rightloopy + 1):
                right.append(array[x][y + num])

            # 왼쪽
            for num in range(1, leftloopy + 1):
                left.append(array[x][y - num])

            # 위쪽
            for num in range(1, uploopx + 1):
                up.append(array[x - num][y])

            # 아래쪽
            for num in range(1, downloopx + 1):
                down.append(array[x + num][y])

            for i in range(0, len(right)):
                if str(right[i]).split(':')[0] != 'black':
                    usearray.append(right[i])
                    if str(right[i]).split(':')[0] == 'white':
                        break
                else:
                    break

            for i in range(0, len(left)):
                if str(left[i]).split(':')[0] != 'black':
                    usearray.append(left[i])
                    if str(left[i]).split(':')[0] == 'white':
                        break
                else:
                    break

            for i in range(0, len(up)):
                if str(up[i]).split(':')[0] != 'black':
                    usearray.append(up[i])
                    if str(up[i]).split(':')[0] == 'white':
                        break
                else:
                    break

            for i in range(0, len(down)):
                if str(down[i]).split(':')[0] != 'black':
                    usearray.append(down[i])
                    if str(down[i]).split(':')[0] == 'white':
                        break
                else:
                    break

        else:
            logger.log('something went wrong')
        pass

    elif name == 'queen':
        if color == 'white':
            downloopx = 7 - x
            uploopx = x
            rightloopy = 7 - y
            leftloopy = y

            rightdown = []
            rightup = []
            leftdown = []
            leftup = []

            up = []
            down = []
            right = []
            left = []

            # 오른쪽
            for num in range(1, rightloopy + 1):
                right.append(array[x][y + num])

            # 왼쪽
            for num in range(1, leftloopy + 1):
                left.append(array[x][y - num])

            # 위쪽
            for num in range(1, uploopx + 1):
                up.append(array[x - num][y])

            # 아래쪽
            for num in range(1, downloopx + 1):
                down.append(array[x + num][y])

            for i in range(0, len(right)):
                if str(right[i]).split(':')[0] != 'white':
                    usearray.append(right[i])
                    if str(right[i]).split(':')[0] == 'black':
                        break
                else:
                    break

            for i in range(0, len(left)):
                if str(left[i]).split(':')[0] != 'white':
                    usearray.append(left[i])
                    if str(left[i]).split(':')[0] == 'black':
                        break
                else:
                    break

            for i in range(0, len(up)):
                if str(up[i]).split(':')[0] != 'white':
                    usearray.append(up[i])
                    if str(up[i]).split(':')[0] == 'black':
                        break
                else:
                    break

            for i in range(0, len(down)):
                if str(down[i]).split(':')[0] != 'white':
                    usearray.append(down[i])
                    if str(down[i]).split(':')[0] == 'black':
                        break
                else:
                    break

            # 오른쪽 아래 방향 카운트해서 배열에 넣기
            for num in range(1, min(rightloopy, downloopx) + 1):
                rightdown.append(array[x + num][y + num])

            # 오른쪽 위 방향
            for num in range(1, min(rightloopy, uploopx) + 1):
                rightup.append(array[x - num][y + num])

            # 왼쪽 아래 방향
            for num in range(1, min(leftloopy, downloopx) + 1):
                leftdown.append(array[x + num][y - num])

            # 왼쪽 위 방향
            for num in range(1, min(leftloopy, uploopx) + 1):
                leftup.append(array[x - num][y - num])

            for i in range(0, len(rightup)):
                if str(rightup[i]).split(':')[0] != 'white':
                    usearray.append(rightup[i])
                    if str(rightup[i]).split(':')[0] == 'black':
                        break
                else:
                    break

            for i in range(0, len(rightdown)):
                if str(rightdown[i]).split(':')[0] != 'white':
                    usearray.append(rightdown[i])
                    if str(rightdown[i]).split(':')[0] == 'black':
                        break
                else:
                    break

            for i in range(0, len(leftup)):
                if str(leftup[i]).split(':')[0] != 'white':
                    usearray.append(leftup[i])
                    if str(leftup[i]).split(':')[0] == 'black':
                        break
                else:
                    break

            for i in range(0, len(leftdown)):
                if str(leftdown[i]).split(':')[0] != 'white':
                    usearray.append(leftdown[i])
                    if str(leftdown[i]).split(':')[0] == 'black':
                        break
                else:
                    break

        elif color == 'black':
            downloopx = 7 - x
            uploopx = x
            rightloopy = 7 - y
            leftloopy = y

            rightdown = []
            rightup = []
            leftdown = []
            leftup = []

            up = []
            down = []
            right = []
            left = []

            # 오른쪽
            for num in range(1, rightloopy + 1):
                right.append(array[x][y + num])

            # 왼쪽
            for num in range(1, leftloopy + 1):
                left.append(array[x][y - num])

            # 위쪽
            for num in range(1, uploopx + 1):
                right.append(array[x - num][y])

            # 아래쪽
            for num in range(1, downloopx + 1):
                left.append(array[x + num][y])

            for i in range(0, len(right)):
                if str(right[i]).split(':')[0] != 'black':
                    usearray.append(right[i])
                    if str(right[i]).split(':')[0] == 'white':
                        break
                else:
                    break

            for i in range(0, len(left)):
                if str(left[i]).split(':')[0] != 'black':
                    usearray.append(left[i])
                    if str(left[i]).split(':')[0] == 'white':
                        break
                else:
                    break

            for i in range(0, len(up)):
                if str(up[i]).split(':')[0] != 'black':
                    usearray.append(up[i])
                    if str(up[i]).split(':')[0] == 'white':
                        break
                else:
                    break

            for i in range(0, len(down)):
                if str(down[i]).split(':')[0] != 'black':
                    usearray.append(down[i])
                    if str(down[i]).split(':')[0] == 'white':
                        break
                else:
                    break

            # 오른쪽 아래 방향 카운트해서 배열에 넣기
            for num in range(1, min(rightloopy, downloopx) + 1):
                rightdown.append(array[x + num][y + num])

            # 오른쪽 위 방향
            for num in range(1, min(rightloopy, uploopx) + 1):
                rightup.append(array[x - num][y + num])

            # 왼쪽 아래 방향
            for num in range(1, min(leftloopy, downloopx) + 1):
                leftdown.append(array[x + num][y - num])

            # 왼쪽 위 방향
            for num in range(1, min(leftloopy, uploopx) + 1):
                leftup.append(array[x - num][y - num])

            for i in range(0, len(rightup)):
                if str(rightup[i]).split(':')[0] != 'black':
                    usearray.append(rightup[i])
                    if str(rightup[i]).split(':')[0] == 'white':
                        break
                else:
                    break

            for i in range(0, len(rightdown)):
                if str(rightdown[i]).split(':')[0] != 'black':
                    usearray.append(rightdown[i])
                    if str(rightdown[i]).split(':')[0] == 'white':
                        break
                else:
                    break

            for i in range(0, len(leftup)):
                if str(leftup[i]).split(':')[0] != 'black':
                    usearray.append(leftup[i])
                    if str(leftup[i]).split(':')[0] == 'white':
                        break
                else:
                    break

            for i in range(0, len(leftdown)):
                if str(leftdown[i]).split(':')[0] != 'black':
                    usearray.append(leftdown[i])
                    if str(leftdown[i]).split(':')[0] == 'white':
                        break
                else:
                    break
        else:
            logger.log('something went wrong')
    elif name == 'king':
        if color == 'white':
            up = []
            down = []
            right = []
            left = []

            # 오른쪽
            if y < 7:
                right.append(array[x][y + 1])

            # 왼쪽
            if y > 1:
                left.append(array[x][y - 1])

            # 위쪽
            if x > 1:
                up.append(array[x - 1][y])

            # 아래쪽
            if x < 7:
                down.append(array[x + 1][y])

            for i in range(0, len(right)):
                if str(right[i]).split(':')[0] != 'white':
                    usearray.append(right[i])
                    if str(right[i]).split(':')[0] == 'black':
                        break
                else:
                    break

            for i in range(0, len(left)):
                if str(left[i]).split(':')[0] != 'white':
                    usearray.append(left[i])
                    if str(left[i]).split(':')[0] == 'black':
                        break
                else:
                    break

            for i in range(0, len(up)):
                if str(up[i]).split(':')[0] != 'white':
                    usearray.append(up[i])
                    if str(up[i]).split(':')[0] == 'black':
                        break
                else:
                    break

            for i in range(0, len(down)):
                if str(down[i]).split(':')[0] != 'white':
                    usearray.append(down[i])
                    if str(down[i]).split(':')[0] == 'black':
                        break
                else:
                    break
        elif color == 'black':
            up = []
            down = []
            right = []
            left = []

            # 오른쪽
            if y < 7:
                right.append(array[x][y + 1])

            # 왼쪽
            if y > 1:
                left.append(array[x][y - 1])

            # 위쪽
            if x > 1:
                up.append(array[x - 1][y])

            # 아래쪽
            if x < 7:
                down.append(array[x + 1][y])

            for i in range(0, len(right)):
                if str(right[i]).split(':')[0] != 'black':
                    usearray.append(right[i])
                    if str(right[i]).split(':')[0] == 'white':
                        break
                else:
                    break

            for i in range(0, len(left)):
                if str(left[i]).split(':')[0] != 'black':
                    usearray.append(left[i])
                    if str(left[i]).split(':')[0] == 'white':
                        break
                else:
                    break

            for i in range(0, len(up)):
                if str(up[i]).split(':')[0] != 'black':
                    usearray.append(up[i])
                    if str(up[i]).split(':')[0] == 'white':
                        break
                else:
                    break

            for i in range(0, len(down)):
                if str(down[i]).split(':')[0] != 'black':
                    usearray.append(down[i])
                    if str(down[i]).split(':')[0] == 'white':
                        break
                else:
                    break
        else:
            logger.log('something went wrong')

    else:
        logger.log('something went wrong')

    return list(set(usearray))
