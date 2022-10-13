#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings- prints strings followed by line
 * @separator: the string printed between strings
 * @n: amount of strings passed
 * @...: variable number of strings
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *str;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str =  va_arg(strings, char *);

		if (str)
			printf("%s", str);
		else
			printf("nil");

		if (separator == NULL || i == (n - 1))
			continue;
		printf("%s", separator);
	}
	printf("\n");

	va_end(strings);
}
