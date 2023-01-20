#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcod - prints opcode of main function
 * @x: the address of main function
 * @n: the number of bytes to be printed
 * Return: nuthing
 */
void print_opcod(char *x, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", x[i]);

		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcod((char *)&main, n);
	return (0);
}







