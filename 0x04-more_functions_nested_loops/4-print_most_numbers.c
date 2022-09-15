#include "main.h"
/**
 * print_most_numbers - see description
 * Description: function prints numbers from 0 to 9
 * Return: nothing
 */
void print_most_numbers(void)
{
	int count;

	for (count = '0'; count <= '9'; count++)
	{
		if (count == '2' || count == '4')
			continue;
		_putchar(count);
	}
	_putchar('\n');
}
