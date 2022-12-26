#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: the string input
 *
 * Return: the integer
 */
int _atoi(char *s)
{
	int res = 0, sign = 1, i = 0;

	if (s[0] == '-')
	{
		sign = -1;
	}
	if (i > 0 && (!(s[0] > '0') || !(s[0] < '9')))
	{
		return (0);
	}
	if (s[0] >= '0' && s[0] >= '9')
	{
		i++;
	}
	for (; s[i] != '\0'; ++i)
	{
		res = res * 10 + (s[i] - '0');
	}
	return (sign * res);
}

