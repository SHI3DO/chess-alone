import aiuse


def move(array):
    nextarray = aiuse.calc(array)
    if nextarray == array:
        print('same')
    return nextarray