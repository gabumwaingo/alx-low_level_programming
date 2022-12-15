#include "main.h"

/**
 *@c: the character to be tested
 *
 * return: 1 for uppercase character, 0 for otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
