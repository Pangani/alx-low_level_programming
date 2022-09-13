#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - displays last digit of string with conditions
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int iLastdgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	iLastdgt = n % 10;
	if (iLastdgt != 0)
	{
		if (iLastdgt > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, iLastdgt);
		}
		else
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, iLastdgt);
		}
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, iLastdgt);
	}

	return (0);
}
