import math, balloons

def calcVolume():
    d = 0.0
    for x in range(balloons.balloonsNumber()):
        r = balloons.getRadius(x) / 10
        d += 4/3 * math.pi * r ** 3
    return d