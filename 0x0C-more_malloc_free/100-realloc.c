#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates memory block
 * @ptr: pointer to previouse memory location
 * allocated to by malloc
 * @old_size: size in bytesof space allocated
 * for ptr
 * @new_size: size in bytes for reasllocated memory
 * location
 * Return: pointer to allocated space
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *arr;
	unsigned int i, n = new_size;
	char *p = ptr;

	if (ptr == NULL)
	{
		arr = malloc(new_size);
		return (arr);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	arr = malloc(new_size);
	if (arr == NULL)
		return (NULL);

	if (new_size > old_size)
		n = old_size;
	for (i = 0; i < n; i++)
		arr[i] = p[i];

	free(ptr);
	return (arr);
}
