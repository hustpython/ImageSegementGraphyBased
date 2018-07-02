#coding=utf-8 
from PIL import Image
def ppmtopng():
    img = Image.open("segfj.ppm")
    img.save("segfj.png")
    img.show()
def pngtoppm():
    img = Image.open("fj.jpg")
    img.save("fj.ppm")
#pngtoppm()
ppmtopng()