#!/usr/bin/python3
"""
Module for island_perimeter() method
"""


def island_perimeter(grid):
    """
    Computers the length of the perimeter of an island.
    """
    flag = 0
    for col, row1 in enumerate(grid):
        for x, cell in enumerate(row1):
            if cell == 1:
                if col == 0 or grid[col - 1][x] == 0:
                    flag += 1
                if col == len(grid) - 1 or grid[col + 1][x] == 0:
                    flag += 1
                if x == 0 or grid[col][x - 1] == 0:
                    flag += 1
                if x == len(row1) - 1 or grid[col][x + 1] == 0:
                    flag += 1
    return flag
