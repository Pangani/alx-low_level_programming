#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - print all
 * @format: list of types of arguments
 * Return: 0 Always
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j, c = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double)), c = 1;
				break;
			case 's':
				str = va_arg(args, char *), c = 1;
				if (str)
					printf("%s", str);
				else
					printf("(nil)");
				break;
		} i++;
	}
	printf("\n"), va_end(args);
}
