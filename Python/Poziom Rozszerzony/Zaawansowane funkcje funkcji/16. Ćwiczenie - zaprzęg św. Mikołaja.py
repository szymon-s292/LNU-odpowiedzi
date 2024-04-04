def setHarness(minRP, **reniferowie):
    sorted_reniferowie = sorted(reniferowie, key=reniferowie.get, reverse=True)
    total_power = 0
    selected_reniferowie = []
    s = ['Dasher', 'Dancer', 'Prancer', 'Vixen', 'Comet', 'Cupid', 'Donner', 'Blitzen', 'Rudolph']

    for renifer in sorted_reniferowie:
        if renifer in s:
            total_power += reniferowie[renifer]
            selected_reniferowie.append(renifer)
        
        if total_power >= minRP:
            break

    return sorted(selected_reniferowie)
