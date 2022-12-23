#include "main.h"

/**
 * rot13 - encodes a string with rot13
 * @s: input string
 *
 * Return: encoded string
 */
char *rot13(char *s)
{
	int i, j;
	char x[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char y[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (x[j] == s[i])
			{
				s[i] = y[j];
				break;
			}
		}
	}
	return (s);
}
