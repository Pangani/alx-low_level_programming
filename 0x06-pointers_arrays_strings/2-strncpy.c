#include "main.h"
/**
 * _strncpy - function concantenates two strings
 * @src: an array of characters
 * @dest: an array of characters
 * @n: number of characters
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, sLen = 0;
	char *temp = dest;
	char *begin = src;

	while (*src)
	{
		sLen++;
		src++;
	}

	sLen++;

	if (n > sLen)
		n = sLen;

	src = begin;

	for (i = 0; i < n; i++)
	{
		*dest++ = *src++;
	}

	return (temp);
}

