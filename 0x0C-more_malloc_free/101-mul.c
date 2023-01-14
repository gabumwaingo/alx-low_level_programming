#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point of program
 * @argc: count of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int num1, num2, mul;
	char *f;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (argc == 3)
	{
		num1 = strtol(argv[1], &f, 10);
		num2 = strtol(argv[2], &f, 10);

		if (!*f)
		{
			mul = num1 * num2;
		}
		else
		{
			printf("Error\n");
			exit(98);
		}
	}
	printf("%d\n", mul);
	return (0);
}
