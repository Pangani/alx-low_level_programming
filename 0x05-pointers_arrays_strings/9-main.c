#include "main.h"
#include <stdio.h>
/**
 * main - check code
 *
 * Return: 0 always
 */
int main(void)
{
	char s1[98];
	char *ptr;

	ptr = _strcpy(s1, "First, solve the problem, write code\n");
	printf("%s", s1);
	printf("%s", ptr);
	return (0);
}

