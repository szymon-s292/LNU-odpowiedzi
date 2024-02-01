def clearText( s ):
    ans = ""
    for x in s:
        if x.isalnum():
            ans += x
    
    return ans