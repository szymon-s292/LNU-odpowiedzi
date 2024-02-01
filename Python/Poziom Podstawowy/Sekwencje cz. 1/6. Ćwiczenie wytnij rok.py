def get_year( date ):
    if date[2] == "9":
        return date[ : 4]
    else:
        return date[ -4 : ]
    
