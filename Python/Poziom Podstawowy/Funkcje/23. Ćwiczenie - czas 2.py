#Your code

def to_time(s):
    x = 0
    while s >= 3600:
        s -= 3600
        x += 10000
    
    while s >= 60:
        s -= 60
        x += 100
        
    if s < 60:
        x += s
        
    return x