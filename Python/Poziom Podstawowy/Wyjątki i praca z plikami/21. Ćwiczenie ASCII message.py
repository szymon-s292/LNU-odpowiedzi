def convertData(file):
    try:
        inputt = open(file, "r")
    except IOError:
        return 1
    
    outputt = open("message.txt", "w")
    length = 0
    for i in inputt:
        length += 1
    
    inputt.seek(0)
    l = 0
    
    for i in inputt:
        l += 1
        i = i.split()
        for j in i:
            try:
                j = int(j)
            except ValueError:
                return 2
            if j < 0 or j > 127:
                return 3
                
            outputt.write(chr(j))
        if l < length:
            outputt.write("\n")
            
    return 0