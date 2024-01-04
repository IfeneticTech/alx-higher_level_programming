#!/usr/bin/python3
if __name__ == "__main__":
    from sys import argv
    sumtheint = 0
    for y in range(1, len(argv)):
        sumtheint += int(argv[y])
    print("{}".format(sumtheint))
