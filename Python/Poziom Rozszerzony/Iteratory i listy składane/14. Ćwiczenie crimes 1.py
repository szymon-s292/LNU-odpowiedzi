def crimes(crimesList):
    return [ [i[0], sum(i[2:7])] for i in crimesList]