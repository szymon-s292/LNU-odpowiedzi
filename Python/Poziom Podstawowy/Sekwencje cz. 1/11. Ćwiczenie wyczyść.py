def cleanText( text ):
    while "$" in text:
        text = text[ :text.index("$")] + text[ text.index("$") + 1 : ]
    return text