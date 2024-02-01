def convertList( values, bases ):
    return [int(str(values[i]), bases[i]) for i in range(len(values))]