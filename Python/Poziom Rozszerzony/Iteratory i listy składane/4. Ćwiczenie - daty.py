def USToISO8601( dateList ):
    return [i[6:] + '-' + i[:2] + '-' + i[3:5] for i in dateList]