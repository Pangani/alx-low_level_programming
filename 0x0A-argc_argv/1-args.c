#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints the name of program
 * @argc: argument count
 * @argv: argument variables
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
