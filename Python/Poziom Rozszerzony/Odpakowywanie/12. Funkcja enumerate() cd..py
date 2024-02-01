def monthReport( data ):
    ans = []
    #tests - 100%
    #positives - 50%
    for i, v in enumerate(data):
        tests, positives = v
        
        if positives > tests * 0.5:
            ans.append(i+1)
            
    return ans