
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - allocates space for a two dimensional array
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to the 2D array
 */
int **alloc_grid(int width, int height)
{
	int **new_array, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	new_array = (int **)malloc(sizeof(int *) * height);

	for (i = 0; i < height; i++)
	{
		new_array[i] = (int *)malloc(sizeof(int) * width);
		if (new_array[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			new_array[i][j] = 0;

	}
	return (new_array);
}
