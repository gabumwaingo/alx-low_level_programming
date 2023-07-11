#include "search_algos.h"
#include <stdlib.h>

/**
*linear_search - searches for a value in an int
* @array: the array to be searched
* @value: the value searched for
* @size: the number of elements un the array
* Return: position if value else -1 on failure
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;
	
	if ( array == NULL)
		return (-1);
	else
	{
		while (i < size)
		{
			if (array[i] == value)
			{
				return (i);
				break;
			}
			else
				i++;
		}
	}
	return (-1);
}
