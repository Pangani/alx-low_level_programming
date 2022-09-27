#include "main.h"
#include <stdio.h>
/**
 *_strstr - function finds the first occurence of substring
 *@haystack: input string to search in
 *@needle: input string to search for
 *Return: location of first occurence or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *startn = needle, *starth = haystack;

	while (*haystack)
	{
		starth = haystack;
		needle = startn;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (haystack);
		haystack = starth + 1;
	}
	return (NULL);
}
