#include "main.h"

/**
 * more_numbers - prints 0-14 x10
 *
 * Return: void
 */
void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a <= 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			_putchar(b + '0');
		}
		_putchar('\n');
	}
}
