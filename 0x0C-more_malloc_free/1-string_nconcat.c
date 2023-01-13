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
	unsigned int i, j, k;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	if (j > n)
		j = n;
	arr = malloc(sizeof(char) * (i + j + 1));

	if (arr == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		arr[k] = s1[k];

	for (k = 0; k < j; k++)
		arr[k + i] = s2[k];

	arr[i + j] = '\0';
	return (arr);
}
