def oddChars(s):
    ans = ""
    for i in range(0, len(s) - 1, 2):
        ans += s[i + 1]
            
    return ans