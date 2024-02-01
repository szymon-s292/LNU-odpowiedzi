def findName( d, n ):
    for i in d:
        if i["NIP"] == n:
            return i["name"]
    return "Data not found"
