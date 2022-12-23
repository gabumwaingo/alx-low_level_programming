#include "main.h"

/**
 * print_number - prints an integer
 * @n: input number to be printed
 *
 * Return: nothing
 */
void print_number(int n)
{
	if (n < 0)
	{
		n *= -1;
	}
	_putchar((n / 10) + '0');
	_putchar((n % 10) + '0');
}
