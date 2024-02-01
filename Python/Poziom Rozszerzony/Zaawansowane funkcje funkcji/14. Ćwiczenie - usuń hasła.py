#place for your code
def delKeys(x, *args):
    for i in args:
        x.pop(i, None)
        
    return x
    