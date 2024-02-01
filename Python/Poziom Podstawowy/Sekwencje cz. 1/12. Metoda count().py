def get_dollar( text ):
    i = text.count("$")
    ans = ""
    while i != 0:
        ans += "$"
        i -= 1;
    
    return ans