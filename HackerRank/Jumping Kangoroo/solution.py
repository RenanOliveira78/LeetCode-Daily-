"""if v1 > v2:
    faster_pos = x1
    slower_pos = x2
    faster_vel = v1
    slower_vel = v2
else:
    faster_pos = x2
    slower_pos = x1
    faster_vel = v2
    slower_vel = v1
flag = False

while faster_pos <= slower_pos and faster_pos != slower_pos:
    faster_pos += faster_vel
    slower_pos += slower_vel
    if faster_pos == slower_pos:
        flag = True
    
if flag:
    return "YES"
else:
    return "NO"
"""


#solving mathematically is optimal, no need for loops

print(2%3)
