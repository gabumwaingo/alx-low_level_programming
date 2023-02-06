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
	unsigned int val = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1' || b[i] == '0')
		{
			val <<= 1;
			val += b[i] - '0';
		}
		else
			return (0);
	}

	return (val);
}
