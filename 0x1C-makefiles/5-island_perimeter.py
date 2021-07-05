#!/usr/bin/python3
""" Check the perimeter of an island """


def island_perimeter(grid):
    """ Return the perimeter of an island """
    rows, columns, perimeter = len(grid), len(grid[0]), 0
    for row in range(rows):
        for position in range(columns):
            if grid[row][position] == 0:
                continue
            if row == 0 or grid[row - 1][position] == 0:
                perimeter += 1
            if row == rows - 1 or grid[row + 1][position] == 0:
                perimeter += 1
            if position == 0 or grid[row][position - 1] == 0:
                perimeter += 1
            if position == columns - 1 or grid[row][position + 1] == 0:
                perimeter += 1
    return perimeter
