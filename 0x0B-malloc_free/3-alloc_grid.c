#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * **alloc_grid - prints 2d array
 * @width: width of rectangle formed from array
 * @height: height of the array
 *
 * Return: pointer to 2d array
 */
int **alloc_grid(int width, int height)
{
	int **arr, i, j;
	int len = width * height;

	if (len <= 0)
		return (NULL);

	arr = (int **)malloc(sizeof(int) * height);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	return (arr);
}
