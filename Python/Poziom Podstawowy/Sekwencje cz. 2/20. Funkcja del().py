def optimize( operations, toRemove ):
    shift = 0
    for x in toRemove:
        del operations[ x - shift ]
        shift += 1
            
    return operations