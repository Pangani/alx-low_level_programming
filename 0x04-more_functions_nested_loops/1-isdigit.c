#include "main.h"
/**
 * _isdigit - check description
 * @c: input character
 * Description: the function checks whether the parameter is digit
 * Return: 1 if digit and 0 otherwise
 */
int _isdigit(int c)
{
	char i;
	int rValue = 0;

	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
		{
			rValue = 1;
		}
	}
	return (rValue);
}
