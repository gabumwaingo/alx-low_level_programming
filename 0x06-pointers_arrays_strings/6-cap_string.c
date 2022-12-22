#include "main.h"

/**
 * *cap_string - capitalizes all words of the string
 * @str: input string
 *
 * Return: capitalized string
 */
char *cap_string(char *str)
{
	int i, j;
	char b[] = " ,;.!?\"(){}";


	while (*(str + i))
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
				str[i] = str[i] - 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (b[j] == *(str + i - 1))
						str[i] -= 'a' - 'A';
				}
			}
		}
		i++
	}
	return (str);
}

