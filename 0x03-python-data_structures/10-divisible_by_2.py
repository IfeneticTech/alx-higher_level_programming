#!/usr/bin/python3
def divisible_by_2(my_list=[]):
    length = len(my_list)
    newlist = []
    for y in range(length):
        if my_list[y] % 2 == 0:
            newlist.append(True)
        else:
            newlist.append(False)
    return newlist
