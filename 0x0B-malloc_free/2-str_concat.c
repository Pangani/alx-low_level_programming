#include "main.h"
#include <stdlib.h>
/**
 * str_concat - joins two strings togethere
 * @s1: input string
 * @s2: input string
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str, *start1, *start2;
	int i = 0, len1 = 0, len2 = 0;

	start1 = s1;
	if (s1 == NULL)
		s1 = "";
	while (*s1)
	{
		len1++;
		s1++;
	}
	s1 = start1;
	start2 = s2;
	if (s2 == NULL)
		s2 = "";
	while (*s2)
	{
		len2++;
		s2++;
	}
	s2 = start2;
	concat_str = malloc(sizeof(char) * (len1 + len2 + 1));
	start1 = concat_str;
	if (concat_str == NULL)
		return (NULL);
	for (; i < (len1 + len2); i++)
	{
		if (i < len1)
		{
			concat_str[i] = *s1;
			s1++;
		}
		else
		{
			concat_str[i] = *s2;
			s2++;
		}
	}
	concat_str[i] = '\0';
	return (start1);
}
