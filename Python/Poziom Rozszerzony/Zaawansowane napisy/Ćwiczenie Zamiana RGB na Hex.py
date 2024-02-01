def rgb_to_hex(colors):
    for color in colors:
        r,g,b = color
        print(f"{r:02X}{g:02X}{b:02X}")