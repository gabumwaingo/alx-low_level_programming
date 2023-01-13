#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocaes memory
 * @b: the quantity of space to be reserved
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *arr;

	arr = malloc(b);
	if (arr == NULL)
		exit(98);
	return (arr);
}
