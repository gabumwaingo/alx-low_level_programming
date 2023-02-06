#include "main.h"
#include <stdlib.h>

/**
 *  binary_to_uint - convert binary to unsigned int
 *  @b: pointer to string containing character reps
 *  for binary
 *  Return: the unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 1;
	int i = 0;

	if (b == NULL)
		return (0);
	for (; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (; b[i] != '\0'; i++)
	{
		val <<= 1;
		if (b[i] == '1')
		{
			val += 1;
		}
	}
	return (val);
}
