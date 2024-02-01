def convertList(values, bases):
    ans = []
    for i in range(len(values)):
        try:
            int(str(values[i]), bases[i])
        except ValueError:
            ans.append(values[i])
    
    return ans        
    