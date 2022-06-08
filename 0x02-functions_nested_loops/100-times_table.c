#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the n times table
 *
 * @i: The value of the times table to be printed.
 *
 * Return: Addition of teo numbers.
 */

void print_times_table(int i)
{
	int num, mult, prod;

	if (i >= 0 && i <= 15)
	{
		for (num = 0; num <= i; num++)
		{
			_putchar('0');

			for (mult = 1; mult <= i; mult++)
			{
				_putchar(',');
				_putchar(' ');

				prod = num * mult;

				if (prod <= 99)
					_putchar(' ');
				if (prod <= 9)
					_putchar(' ');

				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar(((prod / 10)) % 10 + '0');
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar((prod / 10) + '0');
				}
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}

