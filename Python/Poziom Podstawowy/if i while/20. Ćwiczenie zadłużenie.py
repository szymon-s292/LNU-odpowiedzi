def maxPeriod( debt, equity ):
    y = 0
    while debt < equity:
        y += 1
        debt = debt * 1.035 
    
    return y