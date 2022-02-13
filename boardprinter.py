def doprint(array):
    for i in range(len(array)):
        tmparray = []
        for j in range(len(array[i])):
            tmparray.append(str(array[i][j]).ljust(15, '-'))
        print(tmparray)
