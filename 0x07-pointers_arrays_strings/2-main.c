#include <stdio.h>
#include "main.h"
/**
 * main - chdck the code
 * Return: 0 always
 */
int main(void)
{
	char *s = "hello";
	char *f;

	f = _strchr(s, 'l');
	if (f != NULL)
	{
		printf("%s\n", f);
	}
	return (0);
}
