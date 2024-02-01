def weightedRating( rating, weight ):
    ans = []
    for i, j in zip(rating, weight):
        ans.append(round(i*j,1))
        
    return ans