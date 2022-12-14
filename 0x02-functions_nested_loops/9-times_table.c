#include "main.h"

/**
 * times_table - prints 9 times table
 *
 * Return: Always 0
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 1; b <= 9; b++)
		{
			c = a * b;

			if (c < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((c % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
