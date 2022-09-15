#include "main.h"
/**
 * print_numbers - see description
 * Description: function prints numbers from 0 to 9
 * Return: nothing
 */
void print_numbers(void)
{
	int count;

	for (count = '0'; count <= '9'; count++)
		_putchar(count);
	_putchar('\n');
}
