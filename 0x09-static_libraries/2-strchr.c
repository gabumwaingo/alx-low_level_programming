#include "main.h"
#include <stddef.h>

char *_strchr(char *s, char c)
{
	do
	{
		if (*s == c)
			return (s);
	} while (*s++);
	return (NULL);
}
