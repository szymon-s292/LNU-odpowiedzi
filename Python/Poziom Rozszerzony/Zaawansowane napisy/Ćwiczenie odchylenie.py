def deviation(readings):
    mean = sum(readings) / len(readings)
    for reading in readings:
        deviation = reading - mean
        deviation_str = '{:.14f}'.format(deviation)
        print(f"{'o'*(24-len(deviation_str))}{deviation_str}")