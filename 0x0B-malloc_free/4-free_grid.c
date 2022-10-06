#include <stdlib.h>
#include "main.h"
/**
 * free_grid - function that frees a 2D array in alloc_grid function
 * @grid: input 2D array
 * @height: height in grid
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;
	while (i < height)
	{
		free((int *)grid[i++]);
	}
	free(grid);
}
