#your code
import re

def parseInt(x, /, base = 10, *, changeEndianness = False):
    ans = int(str(x), base)
    
    if changeEndianness:
        ans = hex(ans)
        ans = ans[2:]
        if len(ans) % 2 != 0:
            ans = "0" + ans
        
        ans = re.findall("..", ans)
        ans.reverse()
        ans = "".join(map(str, ans))
        ans = int(ans, 16)
        
    return ans;