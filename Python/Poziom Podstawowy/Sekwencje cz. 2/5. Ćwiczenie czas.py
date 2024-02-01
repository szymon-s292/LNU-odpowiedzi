import time 

def displayTime():
    t = time.ctime()[ 11 : 20] + time.ctime()[ 0 : 3 ].upper()
    return t