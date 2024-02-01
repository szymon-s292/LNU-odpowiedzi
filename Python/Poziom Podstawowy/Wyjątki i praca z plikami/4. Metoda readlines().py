def getData( fileName ):
    plik = open(fileName, "r")
    t = plik.readlines()
    ans = ""
    for i in t:
        ans += i[0]
    plik.close()
    return ans