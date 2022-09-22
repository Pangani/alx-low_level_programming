#include "main.h"
/**
 * _strcat - function concantenates two strings
 * @src: an array of characters
 * @dest: an array of characters
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (temp);
}

