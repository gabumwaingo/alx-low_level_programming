#include "function_pointers.h"

/**
 * int_index - searches for an integer using callback
 * function
 * @size: the number of array elements in array
 * @array: the array to be searched
 * @cmp: pointer to the compare function to be called back
 * Return: index to first appearence of searched int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	i = 0;
	while (i < size)
	{
		if (array && cmp)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}

		i++;
	}
	if (cmp(array[i]) == 0)
		return (-1);
}
