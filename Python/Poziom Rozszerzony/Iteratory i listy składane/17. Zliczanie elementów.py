def countLucky( numbers ):
    return sum([i%7==0 for i in numbers])