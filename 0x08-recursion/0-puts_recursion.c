#include "main.h"

/**
 * _puts_recursion - prints outs a string
 * @s: the string to be printed
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == '\0')
		{
			_putchar('\n');
			return;
		}
		i++;
	}

	_putchar(*s);
}
