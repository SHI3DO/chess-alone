def doprint(array):
    for i in range(len(array)):
        tmparray = []
        for j in range(len(array[i])):
            tmparray.append(str(array[i][j]).ljust(15, '-'))
        print(tmparray)


def ver2doprint(array):
    count = 0
    for i in range(len(array)):
        for j in range(len(array[i])):
            count+=1
            doprint(array[i][j])
            print('-----', count)
