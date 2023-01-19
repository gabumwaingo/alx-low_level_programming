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
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]) != 0)
					return (i);
				i++;
			}
		}
	}
	return (-1);
}
