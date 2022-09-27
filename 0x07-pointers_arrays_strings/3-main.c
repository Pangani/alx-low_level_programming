#include <stdio.h>
#include "main.h"
/**
 * main - chdck the code
 * Return: 0 always
 */
int main(void)
{
	char *s = "hello, world";
	char *f = "oleh";
	unsigned int n;

	n = _strspn(s, f);
	printf("%u\n", n);
	return (0);
}
