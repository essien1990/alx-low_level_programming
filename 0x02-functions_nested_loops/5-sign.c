#include "main.h"

/**
 * print_sign - prints the sign of a number.
 *
 * @i: The character to be checked.
 *
 * Return: 1 if the number is greater than zero,
 * 0 if the number is zero,
 * -1 if the number is less than zero.
 */

int print_sign(int i)
{
	if (i > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (i == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
