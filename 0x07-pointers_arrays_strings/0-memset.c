#include "main.h"
/**
 * _memset - function fills memory with constant bytes
 * @s: location
 * @b: char to fill the location with
 * @n: number of bytes to location filled
 * Return: nothing
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *begin = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (begin);
}
