def create():
    playboard = []
    zeroarray = ['0:0','0:0','0:0','0:0','0:0','0:0','0:0','0:0',]
    playerarray = ['white:rook', 'white:knight', 'white:bishop', 'white:king', 'white:queen', 'white:bishop',
                   'white:knight',
                   'white:rook']
    pawnarray = ['white:pawn', 'white:pawn', 'white:pawn', 'white:pawn', 'white:pawn', 'white:pawn', 'white:pawn',
                 'white'
                 ':pawn']

    botplayerarray = ['black:rook', 'black:knight', 'black:bishop', 'black:king', 'black:queen', 'black:bishop', 'black'
                                                                                                                 ':knight',
                      'black:rook']
    botpawnarray = ['black:pawn', 'black:pawn', 'black:pawn', 'black:pawn', 'black:pawn', 'black:pawn', 'black:pawn',
                    'black:pawn']
    playboard.append(playerarray)
    playboard.append(pawnarray)
    for i in range(4):
        playboard.append(zeroarray)
    playboard.append(botpawnarray)
    playboard.append(botplayerarray)

    return playboard