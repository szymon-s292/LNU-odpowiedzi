def encrypt( message ):
    m = ""
    for x in message:
        m += chr(ord(x)*2)
        
    return m