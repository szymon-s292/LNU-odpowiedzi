def get_initials( name ):
    i = name.index(" ")
    return name[ : 1] + name[ i+1 : i+2]
