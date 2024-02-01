def hasDuplicates( text ):
    temp = ""
    
    for i in text:
        if i == temp:
            return True
        temp = i 
    
    return False
