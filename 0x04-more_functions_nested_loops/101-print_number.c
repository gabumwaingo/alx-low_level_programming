#include "main.h"

/**
 * print_number - prints an integer
 * @n: the number to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	char b;

	b = (n % 10) + '0';

	_putchar(b);
}
