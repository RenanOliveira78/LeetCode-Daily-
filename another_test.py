x1 = 0
v1 = 3
x2 = 4
v2 = 2



faster_pos = max(v1, v2)
slower_pos = min(v1, v2)
print(faster_pos)
print(slower_pos)
flag = False

while faster_pos <= slower_pos and x1 != x2:
    print("!")
    x2 += v2
    x1 += v1
    print("x1:", x1)
    print("x2:", x2)
    if x2 == x1:
        flag = True
    
if flag:
    print("YES")
else:
    print("NO")
    