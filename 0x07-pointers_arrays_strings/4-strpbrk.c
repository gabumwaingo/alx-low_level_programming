#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: scanned string
 * @accept: reference
 *
 * Return: pointer to byte in s that is in accept
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (_strchr(accept, *s))
		{
			return (s);
		}
		*s++;
	}
	return (NULL);
}
