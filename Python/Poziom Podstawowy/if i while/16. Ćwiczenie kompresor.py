def compressor( set_pressure ):
    p = get_pressure()
    while set_pressure > p:
        pump()
        p = get_pressure()