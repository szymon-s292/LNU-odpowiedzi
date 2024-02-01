def r(w):
    return w[::-1]
def rhymeList( words ):
    return sorted(words, key=r)