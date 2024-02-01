def leapUsers( users ):
    osoby = 0
    for i in users:
        if int(i[0:4]) % 4 == 0 and int(i[0:4]) % 100 != 0 or int(i[0:4]) % 400 == 0:
            osoby += 1
            
    return osoby