
a = [1 ,2 ,2 ,3, 1 ,2]

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
    
    print(plus_subarray)
    print(minus_subarray)

    max_len = max(len(plus_subarray), len(minus_subarray), max_len)
    print(max_len)

print(max_len)
