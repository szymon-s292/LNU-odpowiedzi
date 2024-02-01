# Your code goes here  
def filter_kwargs(modulo, **kwargs):
    return [i for i in kwargs if int(kwargs[i]) % modulo == 0]
    