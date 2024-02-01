def addData(x):
    file = open( "data.txt", "a" )
    file.write(str(x["PESEL"]) + ' ' + x["firstName"] + ' ' + x["familyName"] + '\n')
    file.close()