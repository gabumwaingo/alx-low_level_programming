#include "main.h"

/**
 * print_alphabet_x10 - prints ten lines with the alphabet
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int b = 0;
	char c;

	while (b <= 10)
	{
		c = 'a';

		while (c <= 'z')
		{
			putchar(c);
			c++;
		}
		putchar('\n');
		b++;
	}
}
