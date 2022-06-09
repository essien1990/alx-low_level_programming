#include "main.h"

/**
 * print_diagonal - function that prints
 * lines diagonally
 *
 * @n: the number of times to print diagonal line
 *
 * Description: Prints a number of lines
 * diagonally
 *
 * Return: returns nothing
 */

void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (b = 0; b < n; b++)
		{
			for (a = 0; a < b; a++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
