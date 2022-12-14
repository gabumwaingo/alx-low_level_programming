#include "main.h"

/**
 * print_alphabet_x10 - prints ten lines with the alphabet
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int b = 0, c;

	while (b <= 9)
	{
		c = 97;

		while (c <= 122)
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		b++;
	}
}
