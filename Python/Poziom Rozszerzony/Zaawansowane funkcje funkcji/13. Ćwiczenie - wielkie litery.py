#your code goes here
def toUpper(x, *args):
    s = ''
    for i in x:
        if i.upper() in list(args) or i.lower() in list(args):
            s += i.upper()
        else:
            s += i
    return s
    