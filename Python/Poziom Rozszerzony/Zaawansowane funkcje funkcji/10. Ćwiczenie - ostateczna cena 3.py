#write your code here
def finalPrice(price,* , tax = 23, discount = 0):
    return round((price + price * tax / 100) * (1 - discount / 100),2)