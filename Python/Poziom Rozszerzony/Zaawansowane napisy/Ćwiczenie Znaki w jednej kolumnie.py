def pretty_print(numbers):
    for i in numbers:
        x = "{:>{width}}".format(abs(i), width=9)
        if i >= 0:
            print(f"+{x}")
        else:
            print(f"-{x}")