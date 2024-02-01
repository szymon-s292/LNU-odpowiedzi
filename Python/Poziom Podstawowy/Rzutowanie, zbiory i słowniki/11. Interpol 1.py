def findSuspects(x, y, z):
    x = set(x)
    y = set(y)
    z = set(z)
    m1 = x & y
    m2 = x & z
    m3 = z & y
    return m1 | m2 | m3