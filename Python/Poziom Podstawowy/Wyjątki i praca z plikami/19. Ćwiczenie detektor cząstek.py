def avgParticles( file ):
    try:
        plik = open(file, "r+")
    except:
        return "file not found"
    v = plik.readlines()
    srednia = 0
    j = 0
    for i in v:
        try:
            j += 1
            srednia += int(i)
        except:
            return "wrong data"
            
    return srednia / j