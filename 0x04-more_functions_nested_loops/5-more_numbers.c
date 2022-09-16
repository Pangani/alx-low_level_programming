#include "main.h"
/**
 * more_numbers - see description
 * Description: function prints numbers from 0 to 14 ten times
 * Return: nothing
 */
void more_numbers(void)
{
	int count, i;

	for (count = 0; count < 10; count++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
