def countChars( s ):
    s = s.upper()
    x = []
    y = set()
    licznik = 0
    for i in s:
        if i not in y:
            x.append(i)
        y.add(i)
    odp = dict.fromkeys(x)
    for i in odp:
        for j in s:
            if i == j:
                licznik += 1
        odp[i] = licznik
        licznik = 0    
    return odp
