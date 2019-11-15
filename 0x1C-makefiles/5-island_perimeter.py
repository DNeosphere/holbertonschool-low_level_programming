#!/usr/bin/python3
"""
Finds the perimeter of an island (binary)
"""


def die_wurst(i, j, grid):
    """ Checks the adyacent numbers"""
    count = 0
    breit = len(grid[0]) - 1
    hoch = len(grid) - 1

    """ Auf """
    if i - 1 < 0 or grid[i - 1][j] == 0:
        count += 1
    """ Unten """
    if i + 1 > hoch or grid[i + 1][j] == 0:
        count += 1
    """ Rechts """
    if j + 1 > breit or grid[i][j + 1] == 0:
        count += 1
    """ Links """
    if j - 1 < 0 or grid[i][j - 1] == 0:
        count += 1

    return count


def island_perimeter(grid):
    """ Finds the perimeter of an Island """
    hoch = len(grid)
    breit = len(grid[0])
    count = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                count += die_wurst(i, j, grid)
    return count
