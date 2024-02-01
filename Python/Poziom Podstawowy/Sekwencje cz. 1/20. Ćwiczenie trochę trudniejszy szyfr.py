def encrypt( message ):
    x = ""
    i = 0
    for s in message:
        x += chr(ord(s) + i)
        i += 1
    return x