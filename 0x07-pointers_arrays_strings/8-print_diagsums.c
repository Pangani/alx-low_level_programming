#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sums of integres in diagonals
 * @a: input array
 * @size: input size
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i, x, sum1 = 0, sum2 = 0, max;

	max = size * size;
	for (i = 0; i < max; i += size + 1)
	{
		sum1 += a[i];
	}
	for (x = size - 1; x < max - 1; x += size - 1)
	{
		sum2 += a[x];
	}
	printf("%d, %d\n", sum1, sum2);
}
