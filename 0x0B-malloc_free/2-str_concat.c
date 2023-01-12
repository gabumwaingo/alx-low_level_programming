#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - concatenates two strings into a
 * new memory location
 * @s1: first string
 * @s2: second string
 * Return: pointer to new memory location
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j;
	int len;
	char *arr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	arr = malloc(sizeof(char) * (strlen(s1) + strlen(s2)) + 1);
	len = strlen(s1) + strlen(s2);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < strlen(s1); i++)
	{
		arr[i] = s1[i];
	}
	for (j = 0; j < strlen(s2); j++, i++)
	{
		arr[i] = s2[j];
	}
	arr[len] = '\0';
	return (arr);
}
