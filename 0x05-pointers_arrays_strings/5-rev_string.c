#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 *
 */
void rev_string(char *s)
{
	int i = 0, a, b;
	char *str, temp;

	while (i >= 0)
	{
		if (s[i] == '\0')
		{
			break;
		}
		i++;
	}
	str = s;

	for (a = 0; (i - 1); a++)
	{
		for (b = a + 1; b > 0; b--)
		{
			temp = *(str + b);
			*(str + b) = *(str + (b - 1));
			*(str + (b - 1)) = temp;
		}
	}
}
