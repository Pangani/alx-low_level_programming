#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - check code
 * Return: 0 always
 */
int main(void)
{
	char *concat;

	concat = string_nconcat("Best ", "School !!!", 6);
	printf("%s\n", concat);
	free(concat);
	return (0);
}
