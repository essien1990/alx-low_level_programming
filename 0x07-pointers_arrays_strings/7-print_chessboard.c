#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard
 * @a: the board to print
 */

void print_chessboard(char (*a)[8])
{
	int m, n;

	m = n = 0;
	while (m < 8)
	{
		n = 0;
		while (n < 8)
		{
			_putchar(a[m][n]);
			n++;
		}
		_putchar('\n');
		n++;
	}

}
