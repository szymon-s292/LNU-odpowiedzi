def birthdayDict( users ):
    return {x.split()[1] + ' ' + x.split()[2] : x.split()[0] for x in users}