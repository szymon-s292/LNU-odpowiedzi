def length(sequence, i = 0):
    if sequence:
        i += 1
        _, *sequence = sequence
        return length(sequence, i)
    else:
        return i