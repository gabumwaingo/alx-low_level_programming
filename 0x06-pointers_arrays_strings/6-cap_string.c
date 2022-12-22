#include "main.h"

/**
 * *cap_string - capitalizes all words of the string
 * @str: input string
 *
 * Return: capitalized string
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] >= 'z')
				str[i] = str[i] - 'a' + 'A';
		continue;
		}
		if (str[i] == ' ' || str[i] == ',' || str[i] == '.')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 'a' + 'A';
				continue;
			}
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] = str[i] - 'A' + 'a';
			}
		}
	}
	return (str);
}

