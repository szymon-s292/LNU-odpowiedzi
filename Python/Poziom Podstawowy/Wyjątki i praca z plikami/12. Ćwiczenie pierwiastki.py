import math
def format():
    p1 = open("preData.txt", "r+")
    p2 = open("data.txt", "w+")
    t = []
    j = 0
    for i in p1:
        t.append(i)
        
    for i in t:
        t[j] = t[j][0:2]
        j += 1
        
    for i in t:
        p2.write(i + ' ' + str(math.sqrt(int(i))) + '\n')
        
    p1.close()
    p2.close()