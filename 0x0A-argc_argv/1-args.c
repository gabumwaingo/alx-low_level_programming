#include <stdio.h>

/**
 * main - entry point of the function that
 * prints number of arguments in the commandline
 * @argc: the number of arguments
 * @argv: the array containing the arguments
 * Return: 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	int j;

	j = argc - 1;
	printf("%d\n", j);

	return (0);
}
