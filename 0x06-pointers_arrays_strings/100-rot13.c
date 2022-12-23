#include "main.h"

/**
 * *rot13 - encodes a string with rot13
 * @s: input string
 *
 * Return: encoded string
 */
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		while (s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z')
		{
			if (s[i] >= 'A' && s[i] < 'N' || s[i] >= 'a' && s[i] < 'n')
			{
				s[i] += 13;
			}
			else
			{
				s[i] -= 13;
			}
		}
	}
	return (s);
}
