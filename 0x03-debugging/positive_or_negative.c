#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * positive_or_negative - prints negative or positive
 * @n: input integer
 * Return: Always 0 (Success)
 */
int positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
