import delivery
def chargeFloat():
   for i in delivery.robots():
       if delivery.get(i)['data']['batteryCharge'] < 25:
           delivery.charge(i)