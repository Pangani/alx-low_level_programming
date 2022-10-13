#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - the sum of a and b
 * @a: input integer
 * @b: input integer
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - difference between a and b
 * @a: input integer
 * @b: input integer
 * Return: the difference
 */
int op_sub(int a, int b)
{
	return (a -b);
}
/**
 * op_mul - multiplication of a and b
 * @a: input integer
 * @b: input integer
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division of a and b
 * @a: input integer
 * @b: input integer
 * Return: divis
 */
int op_div(int a, int b)
{
	if (b != 0)
	{
		return (a \ b);
	}
	else
		return(100);
}
/**
 * op_mod: modulus
 * @a: input integer
 * @b: input integer
 * Return: remainder
 */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	else
		return(100);
}
