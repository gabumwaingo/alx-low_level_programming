#include "main.h"

/**
 * factorial - finnds the factorial of input
 * @n: the inpt integer
 *
 * Return: Factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
