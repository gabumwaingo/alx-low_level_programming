#include "main.h"

/**
 * main - Entry point to the program
 * @argc: size of the array argv
 * @argv: a string array of arguments passed in the commandline
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		if (i == 0)
			_putchar(*argv[i]);

	}
	return (0);
}
