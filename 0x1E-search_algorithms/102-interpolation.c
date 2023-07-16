#include "search_algos.h"

/**
* interpolation_search - impliments the interpolation search algo
* @array: sorted the array to be searched
* @size: the size of tge array
* @value: the element to be found
* Return: the position of the element in the array
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	if (array == NULL)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + ((
		(double)(high - low) / (array[high] - array[low])) * (value - array[low]));

		if (pos < size)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

			if (value == array[pos])
				return (pos);
			if (value > array[pos])
				low = pos + 1;
			else
				high = pos - 1;
		}
		if (pos > size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}

	}
	return (-1);
}
