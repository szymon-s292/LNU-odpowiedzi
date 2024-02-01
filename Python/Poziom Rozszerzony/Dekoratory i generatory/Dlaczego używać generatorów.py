def my_range(start, stop=None, step=None):
    if stop==None:
        i = 0
        wynik = set()
        while i < start:
            wynik.add(i)
            i += 1
        return wynik
    if step==None:
        i = start
        wynik = set()
        while i < stop:
            wynik.add(i)
            i += 1
        return wynik
        
    else:
        i = start
        wynik = set()
        while i < stop:
            wynik.add(i)
            i += step
        return sorted(wynik)