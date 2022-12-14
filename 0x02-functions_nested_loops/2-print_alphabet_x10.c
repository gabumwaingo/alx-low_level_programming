#include "main.h"

/**
 * print_alphabet_x10 - prints ten lines with the alphabet
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int n = 0;
	char c;

	while (n <= 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		n++;
	}
}
