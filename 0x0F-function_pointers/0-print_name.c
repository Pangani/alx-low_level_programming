#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - print a name
 * @name: name of a person
 * @f: function to print name
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	(*f)(name);
}
