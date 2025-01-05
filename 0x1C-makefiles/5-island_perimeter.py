#!/usr/bin/python3
""" a function that returns a perimeter
of the island described in grid """


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in the grid.

    Parameters:
    grid (list of list of int): A grid of 0s and 1s representing water
    and land cells respectively.

    Returns:
    int: The perimeter of the island.
    """
    height = len(grid)
    width = len(grid[0])
    size = 0
    edges = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return ((size * 4) - (edges * 2))
