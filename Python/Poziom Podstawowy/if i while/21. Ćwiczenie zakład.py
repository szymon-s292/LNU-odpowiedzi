def prize(day, month):
    i = 0
    if month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10 or month == 12:
        i = 31
    elif month == 4 or month == 6 or month == 9 or month == 11:
        i = 30
    else:
        i = 28
        
    prize = 0
    while day <= i:
        prize += day
        day += 1
        
    return prize