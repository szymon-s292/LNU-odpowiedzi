def selectAndSum( x ):
    s = 0 
    for i in x.split(", "):
        if i.isnumeric():
            s += int(i)
            
    return s