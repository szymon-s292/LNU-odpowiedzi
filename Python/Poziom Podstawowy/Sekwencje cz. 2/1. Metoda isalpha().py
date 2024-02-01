def formatFirstName( name ):
    if name.isalnum():
        name = name.lower()
        name = name.capitalize()
        return name
    else:
        return ""
    