#include "main.h"

/**
 * prime - finds prime numbers
 * @x: the number suspected to be prime
 * @y: the number to confirm the suspicion
 *
 * Return: 1 if prime 0 if not
 */
int prime(int x, int y)
{
	if (x % y == 0)
	{
		if (x == y)
			return (1);
		else
			return (0);
	}
	return (0 + prime(x, y + 1));
}
/**
 * is_prime_number - returns 1 if input int is prime
 * @n: input int
 * Return: 1 if prime 0 if not
 *
 */
int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	if (n == 1)
		return (0);
	return (prime(n, 2));
}
