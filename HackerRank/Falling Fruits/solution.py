#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'countApplesAndOranges' function below.
#
# The function accepts following parameters:
#  1. INTEGER s
#  2. INTEGER t
#  3. INTEGER a
#  4. INTEGER b
#  5. INTEGER_ARRAY apples
#  6. INTEGER_ARRAY oranges
#

def countApplesAndOranges(s, t, a, b, apples, oranges):
    """
    pos_apples = []
    pos_oranges = []
    
    #first we calculate the position on the x-axis in which the fruits will be ionce fallen
    for apple in apples:
        pos_apples.append(a+apple)
        
    for orange in oranges:
        pos_oranges.append(b+orange)
        
    apple_count = 0
    orange_count = 0

    for pos in pos_apples:
        if pos >= s and pos <= t:
            apple_count += 1
    for pos in pos_oranges:
        if pos >= s and pos <= t:
            orange_count += 1
            
    print(apple_count)
    print(orange_count)
    """
    #quicker solution
    apple_count = 0
    orange_count = 0
    max_fruits = max(len(apples), len(oranges))
    
    for delta_pos in range(max_fruits):
        if delta_pos < len(apples) and a+apples[delta_pos] >= s and a+apples[delta_pos] <= t:
            apple_count += 1
            
        if delta_pos < len(oranges) and b+oranges[delta_pos] >= s and b+oranges[delta_pos] <= t:
            orange_count += 1
    print(apple_count)
    print(orange_count)
            
    

if __name__ == '__main__':
    first_multiple_input = input().rstrip().split()

    s = int(first_multiple_input[0])

    t = int(first_multiple_input[1])

    second_multiple_input = input().rstrip().split()

    a = int(second_multiple_input[0])

    b = int(second_multiple_input[1])

    third_multiple_input = input().rstrip().split()

    m = int(third_multiple_input[0])

    n = int(third_multiple_input[1])

    apples = list(map(int, input().rstrip().split()))

    oranges = list(map(int, input().rstrip().split()))

    countApplesAndOranges(s, t, a, b, apples, oranges)
