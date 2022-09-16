#include "main.h"
/**
 * print_line - see description
 * @n: input character
 * Description: function prints a line for n times
 * Return: 0 always (success)
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
