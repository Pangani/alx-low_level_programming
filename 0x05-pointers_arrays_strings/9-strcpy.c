#include "main.h"
/**
 * *_strcpy - copies string pointed to another buffer
 * @dest: input string
 * @src: input string
 * Return: nothing
 */
char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src)
		*dest++ = *src++;
	return (temp);
}
