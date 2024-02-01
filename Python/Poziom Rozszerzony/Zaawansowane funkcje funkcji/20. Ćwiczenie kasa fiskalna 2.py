#your code goes here
import math
import cash1200
def ultimateFinalPrice(Price, discount, likeCustomer):
    if likeCustomer:
        return cash1200.finalPrice(Price - discount, math.floor)
    else:
        return cash1200.finalPrice(Price - discount, math.ceil)
        
    