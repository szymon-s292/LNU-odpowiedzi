def getEmails( s1, s2 ):
    emails1 = set()
    for x in s1:
        if x[1]:
            emails1.add( x[0] )
            
    emails2 = set()
    for x in s2:
        if x[1]:
            emails2.add( x[0] )
            
    return emails1 | emails2