#include <stdio.h>
#define ULONG_MAX 0xFFFFFFFFUL
#include "main.h"
/**
 * print_binary - function prints a converted binary
 * @n: integer to be converted
 * Return: integer
 */
void print_binary(unsigned long int n)
{
	unsigned int flag = 0;
	unsigned long int max = ULONG_MAX;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (max)
	{
		if (flag == 1 && (n & max) == 0)
			_putchar('0');
		else if ((n & max) != 0)
		{
			_putchar('1');
			flag = 1;
		}
		max >>= 1;
	}
}
