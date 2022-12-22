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
	int temp, i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
