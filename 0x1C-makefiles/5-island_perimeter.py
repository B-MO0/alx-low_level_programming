#!/usr/bin/python3

"""
island_perimeter - finds perimeter of defined "island"
Return: perimeter of island
"""


def island_perimeter(grid):
    """ Finds perimeter of island """
    land = 0
    connect = 0
    for down in range(len(grid)):
        for across in range(len(grid[down])):
            """ Count if cell containing 1 exists """
            if grid[down][across] == 1:
                land += 1
                """ Count if two cells 1-cells are touching """
                """ Note: surrounded by water so should only have 1s if > 1 """
                if down > 0 and grid[down - 1][across] == 1:
                    connect += 1
                if across > 0 and grid[down][across - 1] == 1:
                    connect += 1
    """ Each cell has 4 borders so multiply to get total possible """
    """ But lose 2 if two 1-cells next to each other, one from each cell """
    per = (land * 4) - (connect * 2)
    return per
