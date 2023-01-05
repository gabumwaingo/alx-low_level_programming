#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - prints an input string
 * in reverse
 * @s: the input string
 *
 */
void _print_rev_recursion(char *s)
{
	int len = strlen(s), i;

	i = len - 1;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	_print_rev_recursion(s - 1);
}

