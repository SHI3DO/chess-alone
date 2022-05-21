def score(color: str, name: str):
    returnval = 0
    if color == 'white':
        if name == 'pawn':
            returnval = 10
        elif name == 'knight':
            returnval = 30
        elif name == 'bishop':
            returnval = 30
        elif name == 'rook':
            returnval = 50
        elif name == 'queen':
            returnval = 900
        elif name == 'king':
            returnval = 90
        else:
            returnval = 0

        return returnval
    elif color == 'black':
        if name == 'pawn':
            returnval = 10
        elif name == 'knight':
            returnval = 30
        elif name == 'bishop':
            returnval = 30
        elif name == 'rook':
            returnval = 50
        elif name == 'queen':
            returnval = 900
        elif name == 'king':
            returnval = 90
        else:
            returnval = 0

        return returnval * (-1)
    else:
        return returnval
