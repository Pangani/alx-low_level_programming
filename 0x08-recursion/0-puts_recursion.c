#include "main.h"
/**
 * _puts_recursion - function that prints string, followed by newline
 * @s: input string
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(*s);
	}
	_putchar('\n');
}
