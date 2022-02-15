import os


def log(content):
    f = open('./src/res/log.txt', 'a')
    f.write(f'{content}\n')
    f.close()
