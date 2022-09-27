#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - function searches for first occurence of characters in a string
 * @s: input string to search in
 * @accept: number of characters to search
 * Return: a string
 */
char *_strpbrk(char *s, char *accept)
{
	char *begin = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}
		accept = begin;
		s++;
	}
	return (NULL);
}
