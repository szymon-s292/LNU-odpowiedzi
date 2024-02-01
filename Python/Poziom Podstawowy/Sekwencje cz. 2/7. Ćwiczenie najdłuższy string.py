def findLongest(x):
    ans = x[0]
    for i in x:
        if len(ans) < len(i):
            ans = i
            
    return ans