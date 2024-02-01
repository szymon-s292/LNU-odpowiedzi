def crimes(crimesList):
    return [ [i[0], min(i[2:7]), max(i[2:7])] for i in crimesList if i[-1] > 4000]