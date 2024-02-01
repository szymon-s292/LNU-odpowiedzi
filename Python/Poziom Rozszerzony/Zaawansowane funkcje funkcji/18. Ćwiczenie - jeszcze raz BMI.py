from fitness import bmi
def clientBmi( clientsData, clientId ):
    return bmi(*clientsData[clientId][4:])