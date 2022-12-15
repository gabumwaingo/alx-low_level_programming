#include "main.h"

/**
 * print_line - prints a horizontal line on the terminal
 * @n: number of _ characters to be printed
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
