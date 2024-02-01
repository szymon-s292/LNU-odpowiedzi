def getFeatures( x ):
    new = set(x[0])
    for i in x:
        new &= set(i)

    return new