#include "main.h"

/**
 * print_line - function that prints number of lines
 *
 * @n: the number of times to print line
 *
 * Description: Prints a number of lines
 *
 * Return: returns nothing
 */

void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
