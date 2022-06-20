#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to 2D array.
 * @size: which diagonal to add.
 * Return: no return.
 */

void print_diagsums(int *a, int size)
{
	int i;
	int smx, smy = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			smx += *(a + i);
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			smy += *(a + i);
	}
	printf("%d, %d\n", smx, smy);
}
