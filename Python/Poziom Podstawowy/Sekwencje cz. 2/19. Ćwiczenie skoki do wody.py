def sumUp( args ):
    j = 1
    for i in range(len(args) + 1): 
        if i % 5 == 0: 
            if i == 5:
                args.insert(i, sum(args[i - 5 : i]) - min(args[i - 5 : i]) - max(args[i - 5 : i]))
            elif i > 5:
                args.insert(i + j, sum(args[i + j - 5 : i + j]) - min(args[i + j - 5 : i + j]) - max(args[i + j - 5 : i + j]))
                j += 1    
    return args