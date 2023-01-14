#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for array nmenb
 * @nmemb: number of members
 * the memory location
 * @size: size of the members
 * Return: pointer to memory location
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;

	arr = calloc(nmemb, sizeof(char));

	if (nmemb == 0 || size == 0)
		return (NULL);

	if (arr == NULL)
		return (NULL);

	return (arr);
}
