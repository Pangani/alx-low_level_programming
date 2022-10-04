#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array
 * @size: size of an array
 * @c: initial chaaracter
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	ptr = malloc(size * sizeof(char));

	if (ptr == NULL || size == 0)
		return (NULL);

	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
