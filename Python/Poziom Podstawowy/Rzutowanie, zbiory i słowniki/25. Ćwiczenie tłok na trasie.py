import delivery
def keyPoints():
    zbior = set(delivery.get(delivery.robots()[0])['route'])
    for i in delivery.robots():
        zbior = zbior & set(delivery.get(i)['route'])
    if zbior == set():
        return 0
    else:
        return zbior