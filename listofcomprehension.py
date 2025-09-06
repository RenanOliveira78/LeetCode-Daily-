nums = [12, 42, 43, 765, 7, 5, 4, 2, 13, 3, 5, 7, 98, 98, 5, 642]


evens = [n for n in nums if n%2 == 0]
print(evens)

first_even = evens.pop(0)

print(evens)
print(first_even)

if max(1,2):
    print("wow")