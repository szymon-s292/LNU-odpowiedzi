def join_with(iterators, sep):
    first_iter = True
    for i in iterators:
        if first_iter:
            first_iter = False
        else:
            for j in sep:
                yield j
        for k in i:
            yield k