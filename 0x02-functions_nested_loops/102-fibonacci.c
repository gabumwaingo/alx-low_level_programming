#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long  t1 = 0, t2 = 1, nextTerm;
	int i;

	for (i = 0; i < 50; i++)
	{
		nextTerm = t1 + t2;
		printf("%lu", nextTerm);

		t1 =  t2;
		t2 = nextTerm;

		if (i == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
