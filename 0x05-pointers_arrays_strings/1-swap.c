#include "main.h"
/**
 * swap_int - exchanges values in parameters
 * @a: input pointer
 * @b: input pointer
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
