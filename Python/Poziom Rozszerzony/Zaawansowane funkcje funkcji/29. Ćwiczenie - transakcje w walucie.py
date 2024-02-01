def calcExchangeList(exRates, transactions, currency):
    ex = exRates[currency]
    trans = dict((round(x*ex, 2), y) for x, y in transactions if y == currency)
    return list(trans.keys())