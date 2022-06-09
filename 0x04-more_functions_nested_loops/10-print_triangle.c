#include "main.h"

/**
 * print_triangle - function that prints a triangle
 *
 * @size: size of the triangle
 *
 * Description: Prints the shape of a triangle
 *
 * Return: returns nothing
 */

void print_triangle(int size)
{
	int l, b;

	if (size > 0)
	{
		for (l = 1; l <= size; l++)
		{
			for (b = size; b >= 1; b--)
			{
				if (l < b)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
