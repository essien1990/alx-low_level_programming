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
	int l, b, h, result;

	for (l = 1; b <= size; l++)
	{
		result = size - l;
		result = size - h;

		for (b = 1; b <= h; b++)
		{
			_putchar(' ');
		}
		for (b = 1; b <= result; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
