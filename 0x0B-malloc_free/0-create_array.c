#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array
 * @size: size of the array
 * @c: character to initialise the array
 *
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
