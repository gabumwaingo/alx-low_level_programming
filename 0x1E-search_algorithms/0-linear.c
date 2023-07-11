#include "search_algos.h"
#include <stdlib.h>

/**
* linear_search - implements the linear search algorithm
* @array: array to be searched
* @value: the element in the array being searched for
* @size: size of the array
* Return: position of the value on succes, -1 on failure
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
