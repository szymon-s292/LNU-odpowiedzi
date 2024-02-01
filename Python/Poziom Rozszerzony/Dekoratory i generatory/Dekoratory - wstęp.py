def censoring_wrapper(func):
    def f(*args, ** kwargs):
        pozycyjne = [i for i in args if "k" not in str(i)]
        nazwane = dict((x, y) for x, y in [i for i in kwargs.items() if "k" not in str(i)])
        return func(*pozycyjne,**nazwane)
    return f