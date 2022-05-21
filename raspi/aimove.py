import aiuse
import logger


def move(array):
    nextarray = aiuse.calc(array)
    if nextarray == array:
        logger.log('same')
        print('same')
    return nextarray