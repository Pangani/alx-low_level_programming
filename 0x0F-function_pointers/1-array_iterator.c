#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a functio given as a parameter
 * for each element in array
 * @array: array of elements
 * @size: size of array
 * @action: array of pointers to functions
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
