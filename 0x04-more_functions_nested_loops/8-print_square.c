#include "main.h"
/**
 * print_square - see description
 * @size: input character
 * Description: function prints a diagonal line for n times
 * Return: nothing
 */
void print_square(int size)
{
	int i = 0;
	int count;

	if (size > 0)
	{
		while (i < size)
		{
			for (count = 0; count < size; count++)
			{
				_putchar('#');
			}
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
