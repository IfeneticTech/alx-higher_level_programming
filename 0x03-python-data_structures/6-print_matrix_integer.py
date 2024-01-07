#!/usr/bin/python3
def print_matrix_integer(matrix=[[]]):
    if matrix:
        for y in matrix:
            for w in y:
                print("{:d}".format(w), end=' ' if w != y[-1] else '')
            print()
