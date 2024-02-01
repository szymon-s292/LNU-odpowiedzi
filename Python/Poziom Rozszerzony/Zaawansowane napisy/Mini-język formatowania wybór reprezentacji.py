# your code goes here
def stringify(obj, human_readable=False):
    if human_readable:
        return f"Result: {obj!s}"
    else:
        return f"Result: {obj!r}"