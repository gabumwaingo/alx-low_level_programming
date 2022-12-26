#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: the string input
 *
 * Return: the integer
 */
int _atoi(char *s)
{
	int res = 0, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!(s[i] > '0' || s[i] < '9'))
		{
			break;
			return (0);
		}
		res = res * 10;
		res += s[i] - '0';

		if (s[0] == '-')
		{
			res *= -1;
		}
	}
	return (res);
}

