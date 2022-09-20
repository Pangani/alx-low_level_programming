#include "main.h"
/**
 * _strlen - length of a string
 * @s: input string
 * Return: 0 success
 */
int _strlen(char *s)
{
	int elem  = 0;

	while (s[elem] != '\0')
		elem++;
	return (elem);
}
