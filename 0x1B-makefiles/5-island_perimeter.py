#!/usr/bin/python3


def island_perimeter(grid):
    """finds the perimeter of an island of 1's"""
    count = 0
    for i in range(0, len(grid) - 1):
        for j in range(0, len(grid[i])):
            if grid[i][j] == 1:
                if j - 1 >= 0 or grid[i][j - 1] == 0:
                    count += 1
                if i - 1 >= 0 or grid[i - 1][j] == 0:
                    count += 1
                if i + 1 <= (len(grid) - 1) or grid[i + 1][j] == 0:
                    count += 1
<<<<<<< HEAD
                if j + 1 <= (len(grid[i]) - 1) or grid[i][j + 1] == 0:
=======
<<<<<<< HEAD
                if i + 1 <= (len(grid[i]) - 1) or grid[i][j + 1] == 0:
=======
                if j + 1 <= (len(grid[i]) - 1) and grid[i][j + 1] == 0:
>>>>>>> 2bab015c254ec538e07e179e07b1e8c2b6b9bd83
>>>>>>> a4df4437a2c1c25c8586162e33ba5472cd6d16b6
                    count += 1
    return count
