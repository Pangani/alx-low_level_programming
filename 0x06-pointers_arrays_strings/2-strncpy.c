#include "main.h"
/**
 * _strncpy - copies string
 * @dest: input string
 * @src: input string
 * @n: input string
 * Return: result string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, len = 0;

	while (src[len] != '\0')
		len++;

	for (i = 0; i < n; i++)
	{
		if (i > len)
			*(dest + 1) = '\0';
		else
			*(dest + 1) = src[i];
	}
	return (dest);
}
