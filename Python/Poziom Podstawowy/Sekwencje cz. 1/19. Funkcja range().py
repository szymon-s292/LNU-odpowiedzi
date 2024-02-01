def prize( days ):
    kwota = 0
    suma = 0
    for x in range(days):
        kwota += x + 1
        suma += kwota 
    return suma