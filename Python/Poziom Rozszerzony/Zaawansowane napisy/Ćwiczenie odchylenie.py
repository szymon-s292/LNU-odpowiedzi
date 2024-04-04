def deviation(readings):
    mean = sum(readings) / len(readings)
    for reading in readings:
        dev = (reading - mean)
        deviation_str = str(dev)
        if dev >= 0:
            print(f"{'o'*(25-len(deviation_str))}{deviation_str}")
        else:
            deviation_str = str(abs(dev))
            print(f"{'-' + 'o'*(24-len(deviation_str))}{deviation_str}")
