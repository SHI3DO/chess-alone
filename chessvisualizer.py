from PIL import Image, ImageDraw


def visual(array):
    width = len(array)
    height = len(array[0])
    print(width, height)

    Size = 150
    CSize = 140
    SizeW = Size * width
    SizeH = Size * height
    canvas = Image.new("RGBA", (SizeW, SizeH), color="#ffffff")
    blackqueen = Image.open('./src/blackqueen.png').resize((CSize, CSize))
    blackking = Image.open('./src/blackking.png').resize((CSize, CSize))
    blackknight = Image.open('./src/blackknight.png').resize((CSize, CSize))
    blackbishop = Image.open('./src/blackbishop.png').resize((CSize, CSize))
    blackrook = Image.open('./src/blackrook.png').resize((CSize, CSize))
    blackpawn = Image.open('./src/blackpawn.png').resize((CSize, CSize))
    whitequeen = Image.open('./src/whitequeen.png').resize((CSize, CSize))
    whiteking = Image.open('./src/whiteking.png').resize((CSize, CSize))
    whiteknight = Image.open('./src/whiteknight.png').resize((CSize, CSize))
    whitebishop = Image.open('./src/whitebishop.png').resize((CSize, CSize))
    whiterook = Image.open('./src/whiterook.png').resize((CSize, CSize))
    whitepawn = Image.open('./src/whitepawn.png').resize((CSize, CSize))
    x = Image.open('./src/x.png').resize((CSize, CSize))

    rect = ImageDraw.Draw(canvas)
    rect.rectangle(((SizeW * 1 / 35, SizeH * 1 / 35), (SizeW * 34 / 35, SizeH * 34 / 35)), outline=(0, 0, 0), width=4)

    for i in range(0, width):
        drawx = (SizeW * 33 / 35) / width
        linex = ImageDraw.Draw(canvas)
        line = ((SizeW * 1 / 35 + drawx * i, SizeH * 1 / 35), (SizeW * 1 / 35 + drawx * i, SizeH * 34 / 35))
        linex.line(line, fill="black")

    for i in range(0, height):
        drawy = (SizeH * 33 / 35) / height
        liney = ImageDraw.Draw(canvas)
        line = ((SizeW * 1 / 35, SizeH * 1 / 35 + drawy * i), (SizeW * 34 / 35, SizeH * 1 / 35 + drawy * i))
        liney.line(line, fill="black")

    for i in range(0, width):
        for j in range(0, height):
            drawx = (SizeW * 33 / 35) / width
            drawy = (SizeH * 33 / 35) / height
            print(str(array[i][j]))
            if str(array[i][j]).split(':')[0] == 'black':
                if str(array[i][j]).split(':')[1] == 'pawn':
                    print(i, j)
                    canvas.paste(im=blackpawn, box=(int(SizeW * 1 / 35 + drawx * j), int(SizeH * 1 / 35 + drawy * i)))

                if str(array[i][j]).split(':')[1] == 'king':
                    canvas.paste(im=blackking, box=(int(SizeW * 1 / 35 + drawx * j), int(SizeH * 1 / 35 + drawy * i)))

                if str(array[i][j]).split(':')[1] == 'queen':
                    canvas.paste(im=blackqueen, box=(int(SizeW * 1 / 35 + drawx * j), int(SizeH * 1 / 35 + drawy * i)))

                if str(array[i][j]).split(':')[1] == 'knight':
                    canvas.paste(im=blackknight, box=(int(SizeW * 1 / 35 + drawx * j), int(SizeH * 1 / 35 + drawy * i)))

                if str(array[i][j]).split(':')[1] == 'bishop':
                    canvas.paste(im=blackbishop, box=(int(SizeW * 1 / 35 + drawx * j), int(SizeH * 1 / 35 + drawy * i)))

                if str(array[i][j]).split(':')[1] == 'rook':
                    canvas.paste(im=blackrook, box=(int(SizeW * 1 / 35 + drawx * j), int(SizeH * 1 / 35 + drawy * i)))

            elif str(array[i][j]).split(':')[0] == 'white':
                if str(array[i][j]).split(':')[1] == 'pawn':
                    print(i, j)
                    canvas.paste(im=whitepawn, box=(int(SizeW * 1 / 35 + drawx * j), int(SizeH * 1 / 35 + drawy * i)))

                if str(array[i][j]).split(':')[1] == 'king':
                    canvas.paste(im=whiteking, box=(int(SizeW * 1 / 35 + drawx * j), int(SizeH * 1 / 35 + drawy * i)))

                if str(array[i][j]).split(':')[1] == 'queen':
                    canvas.paste(im=whitequeen, box=(int(SizeW * 1 / 35 + drawx * j), int(SizeH * 1 / 35 + drawy * i)))

                if str(array[i][j]).split(':')[1] == 'knight':
                    canvas.paste(im=whiteknight, box=(int(SizeW * 1 / 35 + drawx * j), int(SizeH * 1 / 35 + drawy * i)))

                if str(array[i][j]).split(':')[1] == 'bishop':
                    canvas.paste(im=whitebishop, box=(int(SizeW * 1 / 35 + drawx * j), int(SizeH * 1 / 35 + drawy * i)))

                if str(array[i][j]).split(':')[1] == 'rook':
                    canvas.paste(im=whiterook, box=(int(SizeW * 1 / 35 + drawx * j), int(SizeH * 1 / 35 + drawy * i)))
            else:
                canvas.paste(im=x, box=(int(SizeW * 1 / 35 + drawx * j), int(SizeH * 1 / 35 + drawy * i)))
    canvas.save(f"./src/res/chess.png", "png")
    canvas.show()
