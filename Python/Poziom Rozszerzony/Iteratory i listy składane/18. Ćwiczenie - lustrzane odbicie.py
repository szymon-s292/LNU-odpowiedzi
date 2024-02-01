def tripleMirror( a ):
    return [[i[::-1]for i in j[::-1]] for j in a[::-1]]
           