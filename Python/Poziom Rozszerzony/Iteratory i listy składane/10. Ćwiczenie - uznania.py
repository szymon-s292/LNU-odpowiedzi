def convertCurrency( bill, ex_rate ):
    return [round(i*ex_rate, 2)for i in bill if i > 0] 