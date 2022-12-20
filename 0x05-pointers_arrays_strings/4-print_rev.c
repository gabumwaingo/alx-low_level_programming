#include "main.h"

/**
 * print_rev - prints a string in reverse order
 * @s: the string to be printed
 *
 * Return: reverse string
 */
void print_rev(char *s)
{
	int i = 0;

	while (i >= 0)
	{
		if (i == '\0')
		{
			break;
		}
		i++;
	}
	for (i--; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
