#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	char passd[] = "1234567890qwertyuiopasdfghjklzxcvbnm!@#$%^&*()_- +=QWERTYUIOPASDFGHJKLZXCVBNM[]{};':<>,.?/|";

	printf("\t");

	for (int i = 0; i < (sizeof (passd)); i++)
	{
		printf("*");
	}
	printf("\n");
	printf("\n");

	srand(time(NULL));

	for (int i = 0; i < (sizeof (passd)); i++)
	{
		printf("%c", passd[rand() % (sizeof (passd - 1))]);
	}
	printf("\n");
	printf("\t");

	{
		printf("*");
	}
	printf("\n");
	return (0);
}
