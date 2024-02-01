def findPeople( data ):
    return list(filter(lambda x: x.istitle(),data.split()))