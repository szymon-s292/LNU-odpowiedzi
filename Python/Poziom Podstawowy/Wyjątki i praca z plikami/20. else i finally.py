def addData(x):
    plik = open("data.txt", "a")
    
    try:
        plik.write( x )
    except:
        return "Type error"
        
    plik.close()
    return "Done"
