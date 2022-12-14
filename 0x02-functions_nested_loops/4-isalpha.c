#include "main.h"

/**
 * _isalpha - checks for alphabet characters
 *
 * @c: is the character to be checked
 *
 * Return: Numbers above 0 for alphabets
 */
int _isalpha(int c)
{
	if (c >= 65 && c >= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
