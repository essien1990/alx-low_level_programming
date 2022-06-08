#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers
 *
 * @i: The number to begin counting at.
 *
 * Return: Addition of teo numbers.
 */

void print_to_98(int i)
{
	if (i >= 98)
	{
		while (i > 98)
			printf("%d, ", i--);
		printf("%d\n", i);
	}
	else
	{
		while (i < 98)
			printf("%d, ", i++);
		printf("%d\n", i);
	}

}
