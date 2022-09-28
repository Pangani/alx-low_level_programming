#include "main.h"
/**
 * _strlen_recursion - function returns the length of a strnig
 * @s: input string
 * Return: number for a length
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
