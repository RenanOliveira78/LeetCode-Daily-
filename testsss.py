

time = "07:08:21PM"

h, m, s = time.split(":")

noon = s[2:]
s = s[:2]

h = int(h)

if noon == "PM" and h != 12:
    h += 12

elif noon == "AM" and h == 12:
    h = 0

print(f"{h}:{m}:{s}")


print(list(range(10)))

a = [1,2,3]
print(set(a))
print(list(range(1, len(set(a))+1, 1)))

b = [0]*len(a)
print(b)