#include "main.h"

char *_strcat(char *dest, char *src)
{
	int j, length;

	while (dest[length] != '\0')
		length++;

	for (j = 0; src[j] != '\0'; ++j, ++length)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
