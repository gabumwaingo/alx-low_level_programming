#include "main.h"

/**
 * *_strncpy - copies content of src string to dest
 * @dest: string to have content put
 * @src: string to be copied
 * @n: specifies the number of bytes to be copied
 *
 * Return: a pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}
