# Your code goes here
def operation(op, *args):
    ans = 0
    if op == "+":
        ans = 0
        for i in args:
            ans += i
    if op == "*":
        ans = 1
        for i in args:
            ans *= i
            
    return ans