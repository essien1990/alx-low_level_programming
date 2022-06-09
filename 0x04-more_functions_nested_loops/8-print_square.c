#include "main.h"

/**
 * print_square - function that prints size of a square
 *
 * @size: the size of a square
 *
 * Description: Prints a size of a square
 *
 * Return: returns nothing
 */

void print_square(int size)
{
	int a, b;

	if (size > 0)
	{
		for (b = 0; b < size; b++)
		{
			for (a = 0; a < size; a++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
