#include "main.h"
#include <stdio.h>
/**
 * main - check code
 *
 * Return: 0 always
 */
int main(void)
{
	int count;
	for (count = 0; count <= 100; count++)
	{
		if (count % 3 == 0 && count % 5 == 0)
			printf("FizzBuzz ");
		else if (count % 3 == 0)
			printf("Fizz ");
		else if (count % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", count);
	}
	printf("\n");
	return (0);
}

