#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all arguments that it recieves
 * @argc: argument count
 * @argv: argument variables
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int count;
	int mul = 1;

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			mul = mul * atoi(argv[count]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
