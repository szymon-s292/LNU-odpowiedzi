#your code goes here
def int(x):
    x = str(x).split(".")
    if x[0].isnumeric():
        return round(float(x[0]))
    else:
        return -1