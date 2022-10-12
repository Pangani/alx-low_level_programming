#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - function searches for an integer
 * @array: array of integers
 * @size: size of an array
 * @cmp: a pointer to the function to be used to compare values
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (k = 0; k < size; k++)
		if (cmp(array[k]))
			return (k);

	if (k == size)
		return (-1);

	return (-1);
}
