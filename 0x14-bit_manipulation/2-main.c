#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - check code
 *
 * Return: 0 always
 */
int main(void)
{
	int n;

	n = get_bit(1024, 10);
	printf("%d\n", n);
	n = get_bit(98, 1);
	printf("%d\n", n);
	n = get_bit(1024, 0);
	printf("%d\n", n);
	return (0);
}