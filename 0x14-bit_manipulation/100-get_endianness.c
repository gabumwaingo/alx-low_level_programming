#include "main.h"

/**
 * get_endianness - checks endianness
 * Return: 0 if big endian 1 if little endian
 */
int get_endianness(void)
{
	int j;
	char *s;

	j = 1;
	s = (char *)&j;

	return (*s);
}
