#include "main.h"

/**
 * _strspn - gets lenth of prefix substring
 * @s: string containing content
 * @accept: string to be checked for s content
 *
 * Return: length of initial segment s in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (s[i] && _strchr(accept, s[i]))
	{
		i++;
	}
	return (i);
}
