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
	while (a < n)
	{
		if (i != n - 1)
			printf("%d, ", b[a]);
		else
			printf("%d", a[b]);
		a++;
	}
	_putchar('\n');
}
