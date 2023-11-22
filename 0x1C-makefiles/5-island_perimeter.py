#!/usr/bin/python3
"""function that returns the perimeter"""


def island_perimeter(grid):
    """
    Function to calculate the perimeter of the island in the grid.
    """
    rows = len(grid)
    cols = len(grid[0]) if rows else 0

    perimeter = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4

                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

    return perimeter
