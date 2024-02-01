import datetime
target_data = (datetime.datetime.now() - datetime.timedelta(days=1826)).strftime('%Y%m%d')

def update(x):
    nowy = {}
    for i in x:
        if x[i][1] > target_data:
            nowy[i] = x[i]
    return nowy