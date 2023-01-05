#include "main.h"

/**
 * evaluate - used to get pure root numbers
 * @i: input int
 * @n: input int
 * Return: squareroot
 */
int evaluate(int i, int n)
{
	if (n == 0 || n == 2)
		return (n);

	else if (i * i < n)
		return (evaluate(i + 1, n));

	else if (i * i == n)
		return (i);

	return (-1);

	return (-1);
}
/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: the input integer
 * Return: the squareroot of n
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (i < 0)
		return (-1);

	else
		return (evaluate(i, n));
}
