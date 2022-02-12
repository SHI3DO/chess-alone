def create():
    playboard = []
    zeroarray = ['black:rook:1', '0:0', 'black:rook:1', '0:0', '0:0', 'black:rook:1', '0:0', '0:0', ]
    playerarray = ['white:rook:1', 'white:knight:1', 'white:bishop:1', 'white:king:1', 'white:queen:1', 'white:bishop:2',
                   'white:knight:2',
                   'white:rook:2']
    pawnarray = ['white:pawn:1', 'white:pawn:2', 'white:pawn:3', 'white:pawn:4', 'white:pawn:5', 'white:pawn:6',
                 'white:pawn:7',
                 'white'
                 ':pawn:8']

    botplayerarray = ['black:rook:1', 'black:knight:1', 'black:bishop:1', 'black:king:1', 'black:queen:1', 'black:bishop:2',
                      'black:knight:2', 'black:rook:2']
    botpawnarray = ['black:pawn:1', 'black:pawn:2', 'black:pawn:3', 'black:pawn:4', 'black:pawn:5', 'black:pawn:6', 'black:pawn:7',
                    'black:pawn:8']

    playboard.append(playerarray)
    playboard.append(pawnarray)
    for i in range(4):
        playboard.append(zeroarray)
    playboard.append(botpawnarray)
    playboard.append(botplayerarray)

    return playboard
