#include "main.h"
/**
 * rev_string - reverses the string
 * @s: input string
 * Return: nothing
 */
void rev_string(char *s)
{
	char temp;
	int len, i;

	len = 0;
	i = 0;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		temp = s[i];
		s[i++] = s[len];
		s[len] = temp;
	}
}
