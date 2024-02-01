def cleanup(string):
    ans = ""
    itr = iter(string)
    
    while 1:
        try:
            letter = next(itr)
            if letter.isalnum():
                ans += letter
        except StopIteration:
            break
        
    return ans