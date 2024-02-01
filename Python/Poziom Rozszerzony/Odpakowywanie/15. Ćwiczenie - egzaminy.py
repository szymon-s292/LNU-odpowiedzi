def who_failed(reports, thresholds):
    ans = []
    for uczen, wymog in zip(reports, thresholds):
        imie, wynik = uczen
        if wynik < wymog:
            ans.append(imie)
            
    return ans