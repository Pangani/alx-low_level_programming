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
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
