def getData(content, pos, key):
    try:
        return content[pos][key]
    except IndexError:
        return "container not found"
    except KeyError:
        return "key not found"