import math

print("Number: ", end="")
num = int(input())

neg_flag = 0 if num < 0 else 1
num_reversed = 0
num_copy = num
digit = 0

while num_copy > 0:
    #get digit
    digit = num_copy%10
    #puts digit in num reversed and increases order of magnitude of previosu umbers inserted
    #here since we loop iteratively and the steps are the orders of magnitude we will only increase the order of magnitude the same as the original numebr
    num_reversed = num_reversed*10 + digit
    num_copy //= 10

print("Number, but backwards: ", num_reversed)