#include "main.h"

/**
 * _pow_recursion - raise power of an int to another int
 * @x: the int to be raised to a power
 * @y: the power
 *
 * Return: x raised to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

