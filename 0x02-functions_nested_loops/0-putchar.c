#include <unistd.h>
#include "main.h"
/**
 * main - main entry
 * description: prints '_putchar' follwed by new line
 * Return: always 0 (success)
 */
int main(void)
{
	char printed_word[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(printed_word[i]);
	}
	_putchar('\n');
	return (0);
}
