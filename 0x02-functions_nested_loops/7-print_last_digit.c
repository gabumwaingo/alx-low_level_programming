#include "main.h"

/**
 * print_last_digit - prints the last digit of an integer
 * @n: the integer whose last digit is printed
 *
 * Return: Last digit of the intger
 */
int print_last_digit(int n)
{
	int b = n % 10;

	if (b < 0)
	{
		b *= -1;

		_putchar(b + '0');
	}

	return (b);
}
