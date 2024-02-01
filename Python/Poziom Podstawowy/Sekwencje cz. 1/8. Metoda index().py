def formatName( name ):
    i = name.index("_")
    ans = name[ : i] 
    ans += name[ i+1 : ].capitalize()
    return ans