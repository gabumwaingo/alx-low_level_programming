#include "main.h"

/**
 * _puts - prints a string on stdout
 * @str: the string to be printed
 *
 * Return: the printed string
 */
void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != 0; a++)
	{
		_putchar(str[a]);
	}
	 _putchar('\n');

}
