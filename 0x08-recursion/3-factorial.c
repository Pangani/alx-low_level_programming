#include "main.h"
/**
 * factorial - function returns the factorial of a number
 * @n: input integer
 * Return: factorial
 */
int factorial(int n)
{
	if (n > 0)
	{
		if (n == 1 || n == 0)
		{
			return (1);
		}
		else
		{
			return (n * factorial(n - 1));
		}
	}
	else
	{
		return (-1);
	}
	return (0);
}
