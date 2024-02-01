def outgoings(x):
    suma = 0
    for i in x:
        try:
            if i < 0:
                suma += i
        except:
            pass
    return suma