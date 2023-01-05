#include "main.h"

/**
 * _print_rev_recursion - prints an input string
 * in reverse
 * @s: the input string
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}

