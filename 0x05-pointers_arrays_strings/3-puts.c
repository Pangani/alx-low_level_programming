#include "main.h"
/**
 * _puts - prints a string followed by new line
 * @str: input string
 * Return: Nothing
 */
void _puts(char *str)
{
	int elem  = 0;

	while (str[elem] != '\0')
	{
		_putchar(str[elem]);
		elem++;
	}
	_putchar('\n');
}
