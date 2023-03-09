# https://www.codechef.com/START65D/problems/CNDY
# DONE C:
from sys import stdin
 
def readint():
    return int(stdin.readline())

def readarray(typ):
    return list(map(typ, stdin.readline().split()))
    
if __name__ == "__main__":
    T = readint()
    for t in range(T):
        n = readint()
        ans = True
        array = readarray(int)
        for x in array:
            if array.count(x) >= 3:
                ans = False
                break
        if ans:
            print("Yes")
        else:
            print("No")
