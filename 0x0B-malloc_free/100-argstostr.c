#include "main.h"
#include <string.h>
#include <stdlib.h>

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
	size_t len = 1;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
		len += strlen(av[j]);
	}
	arr = malloc(sizeof(char) * len);
	arr[0] = '\0';

	for (j = 0; j < ac; j++)
	{
		strcat(arr, av[j]);
		arr[j++] = '\n';
	}

	if (arr == NULL)
		return (NULL);

	return (arr);
}
