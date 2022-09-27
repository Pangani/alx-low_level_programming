#include "main.h"
#include <stdio.h>
/**
 *print_chessboard - check code
 *@a: input multi-dimensional array
 *Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int column, row;

	for (column = 0; column < 8; column++)
	{
		for (row = 0; row < 8; row++)
		{
			_putchar(a[column][row]);
		}
		_putchar(10);
	}
}

