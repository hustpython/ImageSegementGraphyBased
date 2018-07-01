#coding=utf-8 
from PIL import Image
def ppmtopng():
    img = Image.open("ae.ppm")
    img.save("ae.png")
    img.show()
def pngtoppm():
    img = Image.open("ride.jpg")
    img.save("ride.ppm")
#pngtoppm()
ppmtopng()