def getData( x ):
    plik = open( "data.txt", "r" )
    for i in range(1,x):
        plik.readline()
    return plik.readline()
    plik.close()