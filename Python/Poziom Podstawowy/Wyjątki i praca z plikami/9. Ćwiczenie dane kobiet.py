def modify():
    f1 = open("women.txt", "w")
    f2 = open("preWomen.txt", "r")
    line = 0
    for i in f2:
        line += 1
        if int(i[9])%2 == 0:
            f1.write(i)
    f1.close()
    f2.close()
