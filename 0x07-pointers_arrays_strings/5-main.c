#include <stdio.h>
#include "main.h"
/**
 * main - chdck the code
 * Return: 0 always
 */
int main(void)
{
	char *s = "hello, world";
	char *f = "world";
	char *t;

	t = _strstr(s, f);
	printf("%s\n", t);

	return (0);
}
