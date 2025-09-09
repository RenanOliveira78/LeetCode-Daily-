#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'pickingNumbers' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER_ARRAY a as parameter.
#

def pickingNumbers(a):
    max_len = 0
    for element1 in a:
        aux_a = a
        aux_a.remove(element1)
        
        minus_subarray = [element1]
        plus_subarray = [element1]
        
        for element2 in aux_a:
            if element1 - element2 == -1 or element1 - element2 == 0:
                minus_subarray.append(element2)
            if element1 - element2 == 1 or element1 - element2 == 0:
                plus_subarray.append(element2)
                
        max_len = max(len(plus_subarray), len(minus_subarray), max_len)
            
    return max_len
    

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    a = list(map(int, input().rstrip().split()))

    result = pickingNumbers(a)

    fptr.write(str(result) + '\n')

    fptr.close()
