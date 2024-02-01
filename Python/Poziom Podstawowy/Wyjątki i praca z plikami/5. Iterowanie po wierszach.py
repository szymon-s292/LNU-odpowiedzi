def avgAge():
    plik = open( "data.txt", "r" )
    j = 0
    k = 0
    for i in plik:
        j += int(i[0:2])
        k += 1
    plik.close()
    return j/k