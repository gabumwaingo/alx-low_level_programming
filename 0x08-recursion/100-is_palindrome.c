#include "main.h"

/**
 * len - gives length of string
 * @s: input string
 *
 * Return: lenth of input string
 */
int len(char *s)
{
	if (*s != '\0')
	{
		return (0);
	}
	return (1 + len(s++));
}

/**
 * pl - palindrom assist
 * @s: pointer to string
 * @x: position on string
 *
 * Return: 0 if not equal 1 if equal
 */
int pl(char *s, int x)
{
	if (x < 1)
	{
		return (1);
	}
	if (*s == *(s + x))
	{
		return (pl(s + 1, x - 2));
	}
	return (0);
}

/**
 * is_palindrome - checks whether a string and its reverse
 * are equal
 * @s: the string
 *
 * Return: 1 if equal 0 if not
 */
int is_palindrome(char *s)
{
	int l = len(s);

	return (pl(s, l - 1));
}
