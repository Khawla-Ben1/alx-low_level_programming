#include "main.h"

/**
* free_grid - frees an array of 2 dimesions
*@grid:memory to be freed
*@height:height of the array
*Return: void
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
