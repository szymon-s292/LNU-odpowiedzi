def avgTempPerHour(temperatures):
    return [round(sum(i)/4, 1) for i in temperatures]