#!/usr/bin/python3
"""
This module contains a function to calculate the perimeter of an island.
"""


def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in grid.

    Args:
    grid (list of list of int): A list representing the grid of the island.

    Returns:
    int: The perimeter of the island.
    """

    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                    if j > 0 and grid[i][j - 1] == 1:
                        perimeter -= 2

    return perimeter


if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
        ]
    print(island_perimeter(grid))
