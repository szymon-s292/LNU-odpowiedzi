def testA( t1, t2 ):
    if t1.count('a') >= t2.count('a'):
        return t1 + t2
    else:
        return t2 + t1