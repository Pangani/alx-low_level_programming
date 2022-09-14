#include "main.h"
/**
 * _islower - Check Main
 * @c: an input character
 * Description: function uses the _putchar function to print
 * whether a character c lowercase or not
 * Return: 0 if success and 1 if not
 */
int _isalpha(int c)
{
	char i, j;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (j = 'A'; j <= 'Z'; j++)
		{
			if (i == c || j == c)
			{
				lower = 1;
				break;
			}
		}
	}
	return (lower);
}
