#!/usr/bin/python3

"""
island_perimiter
"""


def island_perimeter(grid):
    peri = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                peri += 4
                if i > 0 and grid[i - 1][j] == 1:
                    peri -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    peri -= 2
    return peri
