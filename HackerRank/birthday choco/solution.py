#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'birthday' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER_ARRAY s
#  2. INTEGER d
#  3. INTEGER m
#

def birthday(s, d, m):
    #keep track of star and end of segment
    start = 0
    end = 0
    n_ways= 0
    
    while end <= len(s):
        if sum(s[start:end+1]) == d and abs(start-end)+1 == m:
            n_ways += 1
            if start == end:
                start += 1
                end = start
            else:
                start += 1
                
        #case the sums surpasses the day or the lenght of the bar doe sit too
        elif sum(s[start:end+1]) > d or abs(start-end)+1 > m:
            if start == end:
                start += 1
                end = start
            else:
                start += 1
                
        else:
            end += 1
        
    return n_ways

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    s = list(map(int, input().rstrip().split()))

    first_multiple_input = input().rstrip().split()

    d = int(first_multiple_input[0])

    m = int(first_multiple_input[1])

    result = birthday(s, d, m)

    fptr.write(str(result) + '\n')

    fptr.close()
