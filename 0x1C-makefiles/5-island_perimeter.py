#!/usr/bin/python3
"""compute the perimeter of the island in a given grid."""


def island_perimeter(grid):
    """Function to calculate the perimeter of the island in the grid.
    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        perimeter of the island (int).
    """
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0]) if rows > 0 else 0

    directions = [(-1, 0), (1, 0), (0, -1), (0, 1)]

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                for di, dj in directions:
                    ni, nj = i + di, j + dj
                    if (ni < 0 or ni >= rows
                        or nj < 0 or nj >= cols or grid[ni][nj] == 0):
                        perimeter += 1

    return perimeter
