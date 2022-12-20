#include "main.h"

/**
 * reset_to_98 - takes a pointer to int and updates value to 98
 * @*n: the parameter to which the pointer points
 * @n: the parameter
 * Return:  0
 */
void reset_to_98(int *n)
{
	int p;

	p = &n;
	*p = 98;
	return (0);
}
