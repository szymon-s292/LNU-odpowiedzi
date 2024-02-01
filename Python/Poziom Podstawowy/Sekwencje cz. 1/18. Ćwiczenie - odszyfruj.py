def decrypt( message, key):
    ans = ""
    for x in message:
        ans += chr(int(ord(x) / key))
    return ans