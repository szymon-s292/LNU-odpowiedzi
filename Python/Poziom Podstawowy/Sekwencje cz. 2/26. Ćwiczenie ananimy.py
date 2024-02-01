def hasNotAnanym(x):
    return [i for i in x if i[::-1] not in x]
    