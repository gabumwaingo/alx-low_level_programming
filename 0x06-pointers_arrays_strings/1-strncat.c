#include "main.h"

/**
 * *_strncat - concatenates two stringsbut uses a modt n bytes
 * from src
 * @dest: first input string
 * @src: string to be connected to dest
 * @n: the number of bytes to be copied
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int length, j;

	length = 0;
	while (dest[length] != '\0')
	{
		++length;
	}
	for (j = 0; j < n && src[j] != '\0'; ++j)
	{
		dest[length + j] = src[j];
		dest[length] = '\0';
	}
	return (dest);
}
