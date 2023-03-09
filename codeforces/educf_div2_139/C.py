def paint(s1, s2, n):
    pos = -1
    ans = "YES"
    wall = 0
    while ans == "YES":
        pos1 = s1.find("W", pos+1)
        pos2 = s2.find("W", pos+1)
        if pos1 == -1:
            pos1 = n
        if pos2 == -1:
            pos2 = n
        
        if pos1 < pos2:
            if wall == 1 and (pos1 - pos)%2 == 0:
                ans = "NO"
                #print(1.1, wall, pos, 1, pos1, 2, pos2)
                break
            if wall == 2 and (pos1 - pos)%2 == 1:
                ans = "NO"
                #print(1.1, wall, pos, 1, pos1)
                break
            wall = 1
            pos = pos1
        elif pos2 < pos1:
            if wall == 2 and (pos2 - pos)%2 == 0:
                ans = "NO"
                #print(2.2, wall, pos, 1, pos1, 2, pos2)
                break
            if wall == 1 and (pos2 - pos)%2 == 1:
                ans = "NO"
                #print(2.2, wall, pos, 1, pos1, 2, pos2)
                break
            wall = 2
            pos = pos2
        else:
            pos = pos1
            #print(pos1, pos2)
            break
    return ans
        
                
                
        

T = int(input())
for t in range(T):
    n = int(input())
    s1 = input()
    s2 = input()
    print(paint(s1, s2, n))    