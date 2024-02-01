def sumUp( data, nr ):
    x = 0
    for i in data:
        if i[0] == nr:
            x += i[1]
    return x