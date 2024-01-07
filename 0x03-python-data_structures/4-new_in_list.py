#!/usr/bin/python3
def new_in_list(my_list, idx, element):
    temm = my_list[:]
    if idx < 0:
        return temm
    if idx > len(my_list) - 1:
        return temm
    temm[idx] = element
    return temm
