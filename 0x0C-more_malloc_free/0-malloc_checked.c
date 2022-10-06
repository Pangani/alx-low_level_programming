#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory
 * @b: input number of bytes
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	void *v;

	v = malloc(b);

	if (v == NULL)
	{
		exit(98);
	}
	return (v);
}
