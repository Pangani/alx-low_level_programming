#include "main.h"
#include <stdio.h>
/**
 * _strchr - function searches for first occurence of characters in a string
 * @s: input string to search in
 * @c: number of characters to search
 * Return: a string
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
