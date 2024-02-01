def route():
    while True:
        if left() > 100 and right() > 100 and front() > 100:
            break 
    
        if front() <= 100:
            if right() <= 100:
                turnL()
            else:
                turnR()
        else:
            move()