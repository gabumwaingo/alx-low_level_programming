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
	char *k;
	unsigned int i;

	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = strtol(argv[1], &k, 10);
	j = 0;

	if (!*k)
	{

		while (n > 1)
		{
			for (i = 0; i < sizeof(cents[i]); i++)
			{
				if (n >= cents[i])
				{
					j += n / cents[i];
					n = n % cents[i];
				}
			}
		}
		if (n == 1)
			j++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", j);
	return (0);
}
