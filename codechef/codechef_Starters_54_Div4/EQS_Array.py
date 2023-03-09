# https://www.codechef.com/START65D/problems/EQSARRAY
# 16nov22 
# Correct Answer C:
from sys import stdin
 
def readint():
    return int(stdin.readline())

def readarray(typ):
    return list(map(typ, stdin.readline().split()))
    
if __name__ == "__main__":
    T = readint()
    for t in range(T):
        n, k = map(int, stdin.readline().split())
        ans = "No"
        if n == 1:
            a = readint()
            if k == a:
                ans = "Yes"
        else:
            array_n = readarray(int)
            if k in array_n[:-1]:
                ans = "Yes"
        print(ans)