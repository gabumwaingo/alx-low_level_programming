#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	int length, j;

	length = 0;
	while (dest[length] != '\0')
		length++;
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[length] = src[j];
		j++;
		length++;
	}
	dest[length] = '\0';
	return (dest);
}
