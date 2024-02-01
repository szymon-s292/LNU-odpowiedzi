def findLongest( x ):
    m = len(x[0])
    for i in range(len(x)):
        if m < len(x[i]):
            m = len(x[i])
            
    return m