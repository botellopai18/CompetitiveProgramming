def op_string(s, n):
    ans = "NO"
    if n > 3:
        for i in range(n-2):
            subs = s[i:i+2]
            if s.find(subs, i+2) != -1:
                ans = "YES"
                break
    return ans
            
T = int(input())
for t in range(T):
    n = int(input())
    s = input()
    print(op_string(s, n))    