#include "main.h"

/**
 * print_chessboard - prints chess board
 * @a: input pointer
 *
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i, n = 0;

	for (i = 0; i < 64; i++)
	{
		if (i % 8 == 0 && i != 0)
		{
			n = i;
			_putchar('\n');
		}
		_putchar(a[i / 8][i - n]);
	}
	_putchar('\n');
}
