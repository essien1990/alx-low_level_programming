#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: the board to print
 */

void print_chessboard(char (*a)[8])
{
	unsigned int m, n = 0;

	for (m = 0; m < 64; m++)
	{
		if (m % 8 == 0 && m != 0)
		{
			n = m;
			_putchar('\n');
		}
		_putchar(a[m / 8][m - n]);
	}
	_putchar('\n');
}
