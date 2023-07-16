#include "search_algos.h"

/**
* exponential_search - uses exponential search to find value
* @array: the array to be searched
* @size: the size of the array
* @value: the element to be searched
* Return: position of value ob success else -1
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t range, low, high, mid;

	if (array == NULL)
		return (-1);

	range = 1;
	while (range < size && array[range] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", range, array[range]);
		range *= 2;
	}

	low = range / 2;
	high = (range < size) ? range : size - 1;

	while (low <= high)
	{
		printf("Searching in array: ");
		for (mid = low; mid < high; mid++)
			print ("%d, ", array[mid]);
		printf("%d\n", array[mid]);

		mid = low + ((high - low) / 2);
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
