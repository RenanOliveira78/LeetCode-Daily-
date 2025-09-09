
ranked = [100 ,100, 50 ,40 ,40 ,20 ,10]

player = [5 ,25 ,50 ,120]

rank_set = list(set(ranked))
print(rank_set)
ranked_pointer = len(rank_set) -1
print(rank_set[ranked_pointer])
player_pointer = 0

scores = []

while player_pointer < len(player):
    print(player_pointer)
    if player[player_pointer] < rank_set[ranked_pointer]:
        scores.append(ranked_pointer + 1)
        player_pointer += 1
    elif player[player_pointer] == rank_set[ranked_pointer]:
        scores.append(ranked_pointer)
        player_pointer += 1
    else:
        ranked_pointer += 1
            