#!/usr/bin/python3
"""
    Method that determines the number of trapped water
"""


def rain(walls):

    l, r = 0, len(walls) - 1

    Maxleft, Maxright = walls[l], walls[r]

    res = 0

    while l < r:
        if Maxleft < Maxright:
            l += 1
            Maxleft = max(Maxleft, walls[l])
            res += Maxleft - walls[l]
        else:
            r -= 1
            Maxright = max(Maxright, walls[r])
            res += Maxright - walls[r]
    return res
