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
            print('something went wrong')

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
    else:
        print('something went wrong')

    return list(set(usearray))
