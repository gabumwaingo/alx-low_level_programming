#include "main.h"

/**
 * reverse_array - reverses content of integer array
 * @a: the integer array to be reversed
 * @n: the number of integers in the array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int temp;
	int start = 0, end = n - 1;

	while (a[start] < a[end])
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
