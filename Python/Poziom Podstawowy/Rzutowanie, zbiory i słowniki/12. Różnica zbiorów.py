def getCustomers( myBase, theirBase ):
    myBase = set(myBase)
    theirBase = set(theirBase)
    x = (theirBase - myBase)
    return x