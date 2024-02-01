import delivery
def getTemp( x ):
    json = delivery.get(x)['data']['engineTemp']
    return json
    