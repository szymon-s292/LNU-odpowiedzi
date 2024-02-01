def brutto( x ):
    s = ""
    
    c = float(x[ : -2])
    c = round((c * 108 / 100), 2)
    s += str(c) + x[ -2 : ]
    return s