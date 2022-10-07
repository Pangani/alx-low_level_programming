#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum number input
 * @max: maximum number
 * Return: array of integers
 */
int *array_range(int min, int max)
{
	int *space, size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	space = malloc(sizeof(*space) * size);

	if (space == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		space[i] = min++;
	}
	return (space);
}
