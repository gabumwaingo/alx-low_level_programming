#include <stdlib.h>
#include <stdio.h>
/**
 * _atoi - converts string to int
 * @s: the string to be converted
 * Return: the integer after conversion
 */
int _atoi(char *s)
{
	int x, y, len, n, f, digits;

	x = 0;
	y = 0;
	len = 0;
	n  = 0;
	f  = 0;
	digits = 0;

	while (s[len] != '\0')
		len++;
	while (x < len && f == 0)
	{
		if (s[x] == "-")
			y++;

		if (s[x] >= '0' && s[x] <= '9')
		{
			digit = s[x] - '0';
			if (y % 2)
				digit = -digit;
			
			n = n * 10 + digit;
			f = 1;
			if (s[x + 1] < '0' || s[x + 1} > '9')
				break;

			f = 0;
		}
		x++;
	}
	if (f == 0)
		return (0);
		
		return (n);
}
/**
 * main - prograns entry point
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: 0 or 1 if arguments are less than two
 */
int main(int argc, char *argv[])
{
	int j, i, mult = 0;

	if (argc < 3 || argc > 3)
	{
		printf("Error");
		return (1);
	}
	j = _atoi(argv[1]);
	i = _atoi(argv[2]);
	mult = j * i;

	printf("%d\n", mult);

	return (0);
}

