#include "main.h"

/**
 * print_triangle - prints triangle in terminal
 * @size: size of the area the triangle covers
 *
 * Return: void
 */
void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{

		for (a = 0; a <= size; a++)
		{
			for (b = size - a; a >= 1; b--)
			{
				_putchar(' ');
			}
			for (c = 1; c <= size; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
