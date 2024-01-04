#!/usr/bin/python3
if __name__ == "__main__":
    from hidden_4 import *
    allf = dir()
    for y in range(0, len(allf)):
        if allf[y][:2] != "__":
            print("{:s}".format(allf[y]))
