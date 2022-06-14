#include <stdio.h>
#include "main.h"

/**
 * print_array - Print an array up to n.
 * @a: the array of elements
 * @n: the number of elements of array *a.
 */

void print_array(int *a, int n)
{
	int b;

	b = 0;
	while (b < n)
	{
		if (b != n - 1)
			printf("%d, ", b[a]);
		else
			printf("%d", a[b]);
		b++;
	}
	_putchar('\n');
}
