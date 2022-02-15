from PIL import Image, ImageDraw


def visual(array):
    width = len(array)
    height = len(array[0])
    print(width, height)

    Size = 150
    SizeW = Size * width
    SizeH = Size * height
    canvas = Image.new("RGB", (SizeW, SizeH), color="#ffffff")
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

    canvas.save(f"./src/chess.png", "png")
