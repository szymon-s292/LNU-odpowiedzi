def checkPrisoners( t, i ):
    x = set( t.items() )
    y = set( i.items() )
    if x.issubset(y):
        return True
    else:
        return False