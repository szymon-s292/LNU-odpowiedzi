import datetime

def englishBreakfast(x):
    odp = []
    temp = []

    today = datetime.datetime.today().strftime('%Y%m%d')

    todayY = int(today[:4])

    if int(today[4]) == 0:
        todayM = int(today[5:6])
    else:
        todayM = int(today[4:6])

    if int(today[6]) == 0:
        todayD = int(today[7:])
    else:
        todayD = int(today[6:])

    koniec = datetime.date(todayY, todayM, todayD)
    #koniec = datetime.date(2020, 1, 10) #FOR TESTING ONLY

    for y in x:
        temp.append(str(y[0])) #add ID

        targetY = int(y[1][:4])

        if int(y[1][4]) == 0:
            targetM = int(y[1][5:6])
        else:
            targetM = int(y[1][4:6])
        if int(y[1][6]) == 0:
            targetD = int(y[1][7:])
        else:
            targetD = int(y[1][6:])

        poczatek = datetime.date(targetY, targetM, targetD)
        dni = int((koniec-poczatek).days)
        temp.append(dni)
        odp.append(temp)
        temp=[]
    return odp
