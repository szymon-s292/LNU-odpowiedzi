#your code
def setAlarm(h,d):
    if 1 <= d <= 4 and 6 <= h < 22:
        return False
    
    if d == 5 and 6 <= h < 18:
        return False
        
    if d == 6 and 6 <= h < 16:
        return False
        
    return True