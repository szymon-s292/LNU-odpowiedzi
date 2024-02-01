def testAvg(tests):
    return [ round(sum(i)/len(i),4) for i in tests if len(i) > 1]