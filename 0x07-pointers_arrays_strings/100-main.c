#include <stdio.h>
#include "main.h"
/**
 * main - chdck the code
 * Return: 0 always
 */
int main(void)
{
	char *s0 = "Bob Dylan";
	char *s1 = "Robert Allen";

	printf("%s, %s\n", s0, s1);
	set_string(&s1, s0);
	printf("%s, %s\n", s0, s1);
	return (0);
}
