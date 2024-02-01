def setDict( x ):
    y = dict.fromkeys( x )
    for i in y:
        if i == 2 or i == 3 or i == 5 or i == 7 or i == 11 or i == 13 or i == 17 or i == 19 or i == 23 or i == 29 or i == 31 or i == 37 or i == 41 or i == 43 or i == 47 or i == 53 or i == 59 or i == 61 or i == 67 or i == 71 or i == 73 or i == 79 or i == 83 or i == 89 or i == 97:
            y[i] = "prime"
    return y