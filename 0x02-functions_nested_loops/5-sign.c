#include "main.h"
/**
 * print_sign - print the sign of a number
 * @n: input integer
 * Return: sign value
 */
int print_sign(int n)
{
	int value = 0;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n < 0)
	{
		value = -1;
		_putchar('-');
	}
	else
	{
		value = 0;
		_putchar('0');
	}
	return (value);
}
