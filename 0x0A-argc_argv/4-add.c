#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds all positive integers that it recieves
  @argc: argument count
 * @argv: argument variables
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int count, num;
	int sum = 0;

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			num = atoi(argv[count]);
			if (num > 0 || isdigit(num))
			{
				sum += num;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("%d\n", sum);
	}
	return (0);
}
