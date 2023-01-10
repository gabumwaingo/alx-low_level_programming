#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: o
 */
int main(int argc, char *argv[])
{
	int count, sum = 0, n;
	char *y;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (count = 1; count < argc; count++)
	{
		n = strtol(argv[count], &y, 10);
		if (*y)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += n;
		}
	}
	printf("%d\n", sum);
	return (0);
}

