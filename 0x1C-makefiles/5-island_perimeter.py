#!/usr/bin/python3
'''Module of island calculator'''


def island_perimeter(grid):
    '''returns the perimeter of the island described in gridgrid'''
    if not grid or not grid[0]:
        return 0
    sum = 0
    rows, cols = len(grid), len(grid[0])

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                sum += 4
                if row > 0 and grid[row - 1][col] == 1:
                    sum -= 2
                if col > 0 and grid[row][col - 1] == 1:
                    sum -= 2
    return sum
