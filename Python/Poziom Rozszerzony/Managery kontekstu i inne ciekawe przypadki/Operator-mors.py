def read_good_letters(fname):
    tmp = ''
    with open(fname) as file:
        for char in file.read():
            if char == 'k':
                break
            tmp += char
        
    return tmp