def formatHeight( feet, inches ):
    if feet.isnumeric() and inches.isnumeric() and feet[0] != '0' and inches[0] != '0':
        if 0 <= int(inches) < 12:
            return feet + " ft " + inches 
        else:
            return 0
    else:
        return 0
