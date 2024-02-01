def dashFormat( password_1, password_2, letter ):
    
    for i, v in enumerate(password_1):
        if v.upper() == letter or v.lower() == letter:
            password_2[i] = letter   
            
    return password_2