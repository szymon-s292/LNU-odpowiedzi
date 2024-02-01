def format():
    file1 = open("preData.txt", "r+")
    file2 = open("data.txt", "a+")
    t = []
    for i in file1:
        t.append(i)
    t.reverse()
    for i in t:
        file2.write(i)
    file1.close()
    file2.close()