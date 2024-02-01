def charsInDoc(a, b):
    chars = 0
    for i in range(a, b + 1):
        chars += charsOnPage(i)

    return chars    