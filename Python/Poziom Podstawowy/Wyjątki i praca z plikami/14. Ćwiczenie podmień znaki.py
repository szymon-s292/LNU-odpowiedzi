def replaceSign(x, y):
    plik = open("data.txt", "r+")
    v = plik.read()
    for i in range(len(v)):
        if v[i] == x:
            plik.seek(i)
            plik.write(y)

    plik.close()
   