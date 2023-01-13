#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two srings
 * @s1: first string
 * @s2: second string
 * @n: the number of bytes of s2 to be combined
 * in s1
 * Return: pointer to new memory location with combination
 * of s1 and s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	int len = strlen(s1) + strlen(s2);

	arr = malloc(sizeof(char) * len);

	if (arr == NULL)
		return (NULL);
	strcpy(arr, s1);

	while (*s2 != '\0' && n--)
	{
		*arr++ = *s2++;
	}

	*arr = '\0';
	return (arr);
}
