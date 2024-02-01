def findData( x ):
    plik = open( "data.txt", "r" )
    for i in plik:
        if x == int(i[0:11]):
            return i[12:-1]
    plik.close()
     