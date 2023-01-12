#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * strcatarr - concatnates strim\ngs in an array
 * @des: destination string
 * @s: the array of strings
 */
char *strcatarr(char *des, char *s[], int size)
{
	int i;

	des[0] = '\0';

	for (i = 0; i < size; i++)
	{
		strcat(des, s[i]);
	}
	return (des);
}

/**
 * *argstostr - concatnates argu0ments of my program
 * @ac: number of arguments
 * @av: the array of strings having my program arguments
 *
 * Return: pointer to location of concatenated arguments
 */
char *argstostr(int ac, char **av)
{
	int j;
	char *arr;
	size_t sum;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
		sum += strlen(av[j]);
	}
	arr = malloc(sizeof(char) * sum + 1);

	if (arr == NULL)
		return (NULL);

	return (strcatarr(arr, av, ac));
}
