#include <stdlib.h>
#include <stdio.h>

/**
 * main - prograns entry point
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: 0 or 1 if arguments are less than two
 */
int main(int argc, char *argv[])
{
	int j, i, mult = 0;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	j = atoi(argv[1]);
	i = atoi(argv[2]);
	mult = j * i;

	printf("%d\n", mult);

	return (0);
}

