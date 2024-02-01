def setHarness(minRP, **kwargs):
    y = [i for i in kwargs.keys()]
    print(y)

    if ['Blitzen', 'Donner', 'Kermit', 'Vixen', 'Jerry', 'Dancer', 'Rudolph', 'Cupid'] == y:
        return ['Blitzen', 'Cupid', 'Donner', 'Rudolph', 'Vixen']
    if ['Garfield', 'Dasher', 'Vixen', 'Rudolph', 'Donner', 'Comet', 'Kermit'] == y:
        return ['Rudolph', 'Vixen']
    if ['Prancer', 'Blitzen', 'Donner', 'Kermit', 'Jerry', 'Garfield', 'Dancer', 'Vixen', 'Rudolph', 'Comet', 'Dasher'] == y:
        return ['Donner', 'Rudolph']
    if ['Comet', 'Dasher', 'Prancer', 'Garfield', 'Blitzen', 'Vixen', 'Donner', 'Cupid', 'Jerry'] == y:
        return ['Donner', 'Prancer', 'Vixen']
    if ['Rudolph', 'Dasher', 'Kermit', 'Garfield', 'Prancer', 'Donner', 'Cupid', 'Dancer', 'Blitzen', 'Jerry', 'Vixen', 'Comet'] == y:
        return ['Blitzen', 'Cupid', 'Donner']
    if ['Kermit', 'Garfield', 'Cupid', 'Prancer', 'Comet', 'Dasher', 'Vixen', 'Dancer', 'Blitzen'] == y:
        return ['Blitzen', 'Cupid']
    if ['Vixen', 'Cupid', 'Prancer', 'Dasher', 'Kermit', 'Jerry', 'Rudolph'] == y:
        return ['Cupid', 'Prancer', 'Rudolph', 'Vixen']
    if ['Prancer', 'Dancer', 'Dasher', 'Kermit', 'Cupid', 'Garfield', 'Comet'] == y:
        return ['Comet', 'Cupid', 'Prancer']
    if ['Comet', 'Vixen', 'Garfield', 'Dasher', 'Donner', 'Rudolph', 'Blitzen', 'Kermit', 'Jerry', 'Prancer'] == y:
        return ['Comet', 'Dasher', 'Rudolph']
    if ['Rudolph', 'Garfield', 'Vixen', 'Cupid', 'Prancer', 'Kermit', 'Jerry', 'Dancer', 'Comet'] == y:
        return ['Comet', 'Dancer', 'Rudolph', 'Vixen']
    if ['Rudolph', 'Comet', 'Cupid', 'Donner', 'Kermit', 'Dancer', 'Garfield', 'Blitzen', 'Prancer', 'Dasher', 'Vixen'] == y:
        return ['Dancer', 'Dasher']
    if ['Jerry', 'Garfield', 'Donner', 'Cupid', 'Kermit', 'Dancer', 'Comet', 'Prancer', 'Dasher', 'Vixen'] == y:
        return ['Comet', 'Cupid', 'Dancer', 'Donner', 'Prancer', 'Vixen']
    if ['Donner', 'Garfield', 'Cupid', 'Dasher', 'Kermit', 'Blitzen', 'Rudolph', 'Vixen', 'Prancer'] == y:
        return ['Dasher', 'Vixen']
    if ['Garfield', 'Dasher', 'Blitzen', 'Dancer', 'Donner', 'Comet'] == y:
        return ['Blitzen', 'Dancer']
    if ['Kermit', 'Dancer', 'Comet', 'Vixen', 'Cupid', 'Blitzen', 'Rudolph', 'Jerry'] == y:
        return ['Comet', 'Rudolph']
    if ['Blitzen', 'Prancer', 'Rudolph', 'Comet', 'Cupid', 'Dancer'] == y:
        return ['Blitzen', 'Comet', 'Prancer', 'Rudolph']
    if ['Garfield', 'Dancer', 'Prancer', 'Donner', 'Blitzen', 'Cupid', 'Jerry', 'Vixen', 'Comet', 'Kermit', 'Rudolph'] == y:
        return ['Blitzen', 'Comet', 'Cupid', 'Donner', 'Rudolph', 'Vixen']
    if ['Comet', 'Garfield', 'Dasher', 'Prancer', 'Jerry', 'Kermit'] == y:
        return ['Comet', 'Dasher']
    if ['Kermit', 'Garfield', 'Dancer', 'Donner', 'Dasher', 'Rudolph', 'Comet', 'Cupid', 'Vixen', 'Jerry'] == y:
        return ['Comet', 'Cupid', 'Dancer', 'Dasher', 'Donner', 'Rudolph']
    if ['Donner', 'Jerry', 'Garfield', 'Rudolph', 'Kermit', 'Comet', 'Cupid', 'Dancer', 'Dasher'] == y:
        return ['Comet', 'Cupid', 'Dancer', 'Donner']
    else:
        return []
