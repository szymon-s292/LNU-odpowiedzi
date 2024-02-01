def decorator(func):
    def f(*args, **kwargs):
        x,y=args
        result = func(*args, **kwargs)
        print(x,y,x**y)
        return result
    
    return f


@decorator
def power(x, y):
    return x ** y