#include "main.h"

int _atoi(char *s)
{
	unsigned int res = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!(s[i] >= '0' && s[i] <= '9'))
			break;

		res = res * 10;
		res = res + s[i] - '0';
	}
	return (res);
}

