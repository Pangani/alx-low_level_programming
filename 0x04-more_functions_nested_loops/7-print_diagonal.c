#include "main.h"
/**
 * print_diagonal - see description
 * @n: input character
 * Description: function prints a diagonal line for n times
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i = 0;
	int count;

	if (n > 0)
	{
		while (i < n)
		{
			for (count = 0; count < i; count++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
			i++;
		}
	}
	_putchar('\n');
}
