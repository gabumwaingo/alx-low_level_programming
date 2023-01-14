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
	unsigned int a;

	arr = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
		return (NULL);

	for (a = 0; a < (nmemb * size); a++)
		arr[a] = 0;

	return (arr);
}
