#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long int j;
	long long int k;
	char c;
	float f;

	printf("Size of int: %ld bytes \n", (unsigned long)sizeof(i));
	printf("Size of long int: %ld bytes \n", (unsigned long)sizeof(j));
	printf("Size of long long int: %ld bytes \n", (unsigned long)sizeof(k));
	printf("Size of char: %ld byte \n", (unsigned long)sizeof(c));
	printf("Size of float: %ld bytes \n", (unsigned long)sizeof(f));
	return (0);
}
