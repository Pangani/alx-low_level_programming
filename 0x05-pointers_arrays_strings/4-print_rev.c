#include "main.h"
/**
 * print_rev - prints a string, in reverse
 * @str: input string
 * Return: Nothing
 */
void print_rev(char *str)
{
	int elem  = 0;

	while (str[elem] != '\0')
		elem++;

	while (elem)
		_putchar(str[--elem]);

	_putchar('\n');
}
