def getData(x):
    plik = open( "data.txt", "r" )
    y = plik.read(x)
    plik.close()
    return y