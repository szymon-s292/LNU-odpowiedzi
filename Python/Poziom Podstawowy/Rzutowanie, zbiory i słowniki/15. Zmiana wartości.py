def complete( x ):
    for i in x:
        if x[i] == "":
            x[i] = False
            
    return x