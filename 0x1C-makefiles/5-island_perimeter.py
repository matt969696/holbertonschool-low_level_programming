#!/usr/bin/python3
"""
Island perimeter module
"""


def island_perimeter(grid):
    """ Function that computes perimeter of an island"""
    nbline = len(grid)
    nbcol = len(grid[0])
    perim = 0
    for i in range(nbline):
        for j in range(nbcol):
            count = 0
            if grid[i][j] == 1:
                if i > 0:
                    count += grid[i - 1][j]
                if i < (nbline - 1):
                    count += grid[i + 1][j]
                if j > 0:
                    count += grid[i][j - 1]
                if j < (nbcol - 1):
                    count += grid[i][j + 1]
                perim = perim + 4 - count
    return perim
