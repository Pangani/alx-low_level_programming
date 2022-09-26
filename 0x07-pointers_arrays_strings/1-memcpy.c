#include "main.h"
/**
 * _memcpy - function that copy's memory
 * @dest: memory area for destination
 * @src: memory area source to copy from
 * @n: number to copy from
 * Return: returns a small kid
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	char *begin = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (begin);
}
