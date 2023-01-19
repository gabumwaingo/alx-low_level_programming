#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * of an array of ints
 * @array: the array with function given as a parameter
 * of each of its elements
 * @size: size of the array
 * @action: the pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
