def switchType(arg):
    if isinstance(arg, (int, float)):
        return str(arg)
    else:
        try:
            return int(arg)
        except ValueError:
            return float(arg)