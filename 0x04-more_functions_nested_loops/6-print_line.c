#include "main.h"
/**
 * print_line - see description
 * @n: input character
 * Description: function prints a line for n times
 * Return: 0 always (success)
 */
int print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	if (n =< 0)
		_putchar('\n');
	return (0);
}
