#!/usr/bin/python3
""" This module is on a technical interview preparation. Island Perimeter"""


def island_perimeter(grid):
    """ This returns te perimeter of the island"""

    land = 0
    width = len(grid[0]) - 1
    length = len(grid) - 1

    for i, j in enumerate(grid):
        for n, m in enumerate(grid):
            if m == 1:
                if i == 0 or grid[i - 1][n] != 1:
                    land += 1
                if n ==  0 or grid[i][n - 1] != 1:
                    land += 1
                if n == width or grid[i][n + 1] != 1:
                    land += 1
                if i == length or grid[i + 1][n] != 1:
                    land += 1
    return land
