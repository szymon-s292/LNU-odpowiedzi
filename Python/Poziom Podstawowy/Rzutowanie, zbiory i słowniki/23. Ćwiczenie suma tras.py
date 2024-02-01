import delivery
def totalRoute():
    sumi = 0
    robots = delivery.robots()
    for i in robots:
        sumi += delivery.get(i)['data']['distanceToday']
        
    return sumi