#your code goes here
def retName(first, last, second = ''):
    if second:
        return f"{first} {second} {last}"
    return f"{first} {last}"