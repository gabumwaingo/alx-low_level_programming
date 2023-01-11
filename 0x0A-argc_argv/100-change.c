#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of program
 * @argc: The number of arguments
 * @argv: array of arguments
 *
 * Return: 1 if argc is not 1 otherwise 0
 */
int main(int argc, char *argv[])
{
	int n, j;
	unsigned int i;

	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);

	j = 0;

	while (n > 1)
	{
		for (i = 0; i < sizeof(cents[i]); i++)
		{
			if (n >= cents[i])
			{
				j = n / cents[i];
				n = n % cents[i];
			}
		}
		j++;
	}
	printf("%d\n", j);
	return (0);
}
