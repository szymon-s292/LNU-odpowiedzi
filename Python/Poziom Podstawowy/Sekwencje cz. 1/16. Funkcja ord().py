def maxOrd( text ):
    m = ord(text[0])
    for x in text:
        if ord(x) > m:
            m = ord(x)
    
    return m