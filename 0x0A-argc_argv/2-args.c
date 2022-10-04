#include <stdio.h>
#include "main.h"
/**
 * main - prints all arguments that it recieves
 * @argc: argument count
 * @argv: argument variables
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		int count;

		for (count = 0; count < argc; count++)
			printf("%s\n", argv[count]);
	}
	return (0);
}
