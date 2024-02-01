from dataDispenser import nextValue

def analyze(size):
    suma = 0
    temp = 0
    for i in range(size):
        if (temp := nextValue()) > 3.14:
            suma += temp
            
    return suma