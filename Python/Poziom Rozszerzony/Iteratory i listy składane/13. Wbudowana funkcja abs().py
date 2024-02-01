def miniDeviation( readings ):
    return [ min(i) for i in [ [abs(x) for x in y ] for y in readings]]