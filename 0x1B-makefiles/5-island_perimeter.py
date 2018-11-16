#!/usr/bin/python3

def island_perimeter(grid):
    """finds the perimeter of an island of 1's"""
    count = 0
    for i in range(0, len(grid) -1):
        for j in range(0, len(gird[i])):
            if grid[i][j] == 1:
                if j - 1 >= 0 and grid[i][j - 1] == 0:
                    count += 1
                if i - 1 >= 0 and grid[i - 1][j] == 0:
                    count += 1
                if i + 1 <= (len(grid) - 1) and grid[i + 1][j] == 0:
                    count += 1
                if i + 1 <= (len(grid[i]) - 1) and grid[i][j + 1] == 0:
                    count += 1
    return count
