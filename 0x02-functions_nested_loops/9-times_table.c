#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Description: prints the 9 times table, starting with 0.
 *
 * Return: 9 times table, starting with 0
 */

void times_table(void)
{
	int n, mul, product;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');
		for (mul = 1; mul <= 9; mul++)
		{
			_putchar(',');

			_putchar(' ');

			product = n * mul;

			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) + '0');

			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
