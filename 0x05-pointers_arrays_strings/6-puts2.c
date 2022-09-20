#include "main.h"
/**
 * puts2 - prints every character of a string followed by new line
 * @str: input string
 * Return: Nothing
 */
void puts2(char *str)
{
	int elem, k;

	elem = 0;
	k = 0;

	while (str[elem] != '\0')
	{
		elem++;
	}
	elem -= 1;

	while (k <= elem)
	{
		_putchar(str[k]);
		k += 2;
	}
	_putchar('\n');
}
