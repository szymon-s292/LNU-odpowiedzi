def countGarfield( names ):
    itr = iter(names)
    i = 0
    while 1:
        try:
            i += 1
            if next(itr) == 'Garfield':
                return i
        except StopIteration:
                 break 