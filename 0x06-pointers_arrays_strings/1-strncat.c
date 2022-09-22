#include "main.h"
/**
 * _strncat - function concantenates two strings
 * @src: an array of characters
 * @dest: an array of characters
 * @n: number of characters
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, sLen = 0;
	char *temp = dest, *begin = src;

	while (*dest)
		dest++;

	while (*src)
	{
		src++;
		sLen++;
	}
	if (n > sLen)
		n = sLen;

	src = begin;

	for (i = 0; i < n; i++)
	{
		*dest++ = *src++;
	}

	*dest = '\0';
	return (temp);
}

