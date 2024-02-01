def m(l):
    return max(l)
def sortByMax(lists):
    return sorted(lists,key=m,reverse=True)