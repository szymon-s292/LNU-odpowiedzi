#your code

def setValve(x):
    if x <= 100:
        return 0
    elif 100 < x <= 200:
        return 1
    elif 200 < x <= 400:
        return 2
    elif 400 < x <= 600:
        return 3
    elif 600 < x <= 800:
        return 4
    elif x > 800:
        return 5
    