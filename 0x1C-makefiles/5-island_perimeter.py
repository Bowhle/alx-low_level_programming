#!/usr/bin/python3

def island_perimeter(grid):
    """
    Returns the perimeter of the island described in the grid.

    Parameters:
    grid (list of list of int): A grid of 0s and 1s representing water and land cells respectively.

    Returns:
    int: The perimeter of the island.
    """
    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                # Check the four sides of each land cell
                if i == 0 or grid[i - 1][j] == 0:  # Check the cell above
                    perimeter += 1
                if i == len(grid) - 1 or grid[i + 1][j] == 0:  # Check the cell below
                    perimeter += 1
                if j == 0 or grid[i][j - 1] == 0:  # Check the cell to the left
                    perimeter += 1
                if j == len(grid[i]) - 1 or grid[i][j + 1] == 0:  # Check the cell to the right
                    perimeter += 1

    return perimeter
