def valueToDecimal(value, base):
    ans = 0
    
    for i, v in enumerate(value[::-1]):
        ans += int(v) * base ** i
        
    return ans