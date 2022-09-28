#include "main.h"
int _sqrt(int x, int y);
/**
 * _sqrt_recursion - returns a square root of a number
 * @n: input integer
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(1, n));
}
/**
 * _sqrt - finds the square root
 * @x: input integer
 * @y: input integer
 * Return: return square root
 */
int _sqrt(int x, int y)
{
	if (x > y)
		return (-1);
	else if (x * x == y)
		return (x);
	return (_sqrt(x + 1, y));
}
