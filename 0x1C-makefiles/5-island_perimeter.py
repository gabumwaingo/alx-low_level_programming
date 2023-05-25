#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in the grid.

    Args:
        grid (List[List[int]]): A rectangular grid representing the island.

    Returns:
        int: The perimeter of the island.

    """

    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                perimeter += 4  # Start with 4 sides

                # Check neighboring cells
                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2  # Subtract 2 for each shared side
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2

    return perimeter
