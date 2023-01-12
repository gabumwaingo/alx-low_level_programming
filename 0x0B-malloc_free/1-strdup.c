#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - returns pointer to newly allocated
 * mem space with str copy
 * @str: the reference
 *
 * Return: pointer to the mem space
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *arr;

	if (str == NULL)
		return (NULL);
	arr = malloc(sizeof(char) * strlen(str) + 1);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < strlen(str); i++)
		arr[i] = str[i];

	return (arr);
	free(arr);
}


