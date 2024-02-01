def replaceSign(x, y):
    file = open("data.txt","r+")
    file.seek(x-1)
    file.write(y)
    file.close()
   