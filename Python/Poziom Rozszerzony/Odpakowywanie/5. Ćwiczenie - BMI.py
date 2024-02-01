def bmi( person ):
    _, _, masa, wzrost = person
    wzrost /= 100
    return round(masa / (wzrost*wzrost),2)