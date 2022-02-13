def create():
    playboard = []
    playerarray = ['white:rook:1', 'white:knight:1', 'white:bishop:1', 'white:king:1', 'white:queen:1',
                   'white:bishop:2',
                   'white:knight:2',
                   'white:rook:2']
    zeroarray1 = ['0:0:A1', '0:0:A2', '0:0:A3', '0:0:A4', '0:0:A5', '0:0:A6', '0:0:A7', '0:0:A8']
    zeroarray2 = ['0:0:B1', '0:0:B2', '0:0:B3', '0:0:B4', '0:0:B5', '0:0:B6', '0:0:B7', '0:0:B8']
    zeroarray3 = ['0:0:C1', '0:0:C2', '0:0:C3', '0:0:C4', '0:0:C5', '0:0:C6', '0:0:C7', '0:0:C8']
    zeroarray4 = ['0:0:D1', '0:0:D2', '0:0:D3', '0:0:D4', '0:0:D5', '0:0:D6', '0:0:D7', '0:0:D8']
    pawnarray = ['white:pawn:1', 'white:pawn:2', 'white:pawn:3', 'white:pawn:4', 'white:pawn:5', 'white:pawn:6',
                 'white:pawn:7',
                 'white:pawn:8']

    botplayerarray = ['black:rook:1', 'black:knight:1', 'black:bishop:1', 'black:king:1', 'black:queen:1',
                      'black:bishop:2',
                      'black:knight:2', 'black:rook:2']
    botpawnarray = ['black:pawn:1', 'black:pawn:2', 'black:pawn:3', 'black:pawn:4', 'black:pawn:5', 'black:pawn:6',
                    'black:pawn:7',
                    'black:pawn:8']

    playboard.append(playerarray)
    playboard.append(pawnarray)
    playboard.append(zeroarray1)
    playboard.append(zeroarray2)
    playboard.append(zeroarray3)
    playboard.append(zeroarray4)
    playboard.append(botpawnarray)
    playboard.append(botplayerarray)

    return playboard
