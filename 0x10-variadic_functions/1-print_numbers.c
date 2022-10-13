#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints nubers followed by line
 * @separator: the string printed between numbers
 * @n: amount of integers printed
 * @...: variable number of numbers
 * Return: sum
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator == NULL || i == (n - 1))
			continue;
		printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
