#include "main.h"
/**
 * print_alphabet_10x - check the description
 * Description: function uses _putchar to print 
 * alphabet in lowercase 10 times
 * Return: nothing since it is void.
 */
void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
