#include "search_algos.h"
#include <math.h>

/**
*  binary_search - implements the search algorithm to find value in array
* @array: array to be searched
* @value: element to found in array
* @size: size of the array
* Return: position of the alue on success elde -1
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t j = size - 1;
	size_t m, k;

	if (array == NULL)
		return (-1);

	while (i <= j)
	{
		printf("Searching in array: ");
		for (k = i; k <= j; k++)
			printf("%d, ", array[k]);
		printf("\n");

		m = i + (j - i) / 2;

		if (array[m] < value)
			i = m + 1;
		else if (array[m] > value)
			j = m - 1;
		else
			return (m);
	}
	return (-1);
}
