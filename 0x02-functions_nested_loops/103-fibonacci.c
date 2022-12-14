#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	unsigned long f1 = 0, f2 = 1, nextTerm;
	float sum;

	while (nextTerm <= 4000000)
	{
		nextTerm = f1 + f2;

		if ((nextTerm % 2) == 0)
		{
			sum += nextTerm;
		}

		f1 = f2;
		f2 = nextTerm;
	}
	printf("%0.f\n", sum);
	return (0);
}

