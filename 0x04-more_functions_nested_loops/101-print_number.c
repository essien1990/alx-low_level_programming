#include "main.h"

/**
 * print_number - function that prints numbers
 *
 * @n: number for input
 *
 * Description: Prints numbers
 *
 * Return: returns nothing
 */

void print_number(int n)
{
	long length, result, a, tmp, expo;

	result = n;
	expo = length = 1;

	if (result < 0)
	{
		result *= -1;
		_putchar('-');
	}

	tmp = result;
	while (tmp >= 10)
	{
		length++;
		tmp = tmp / 10;
	}

	for (a = 1; a  < length; a++)
		expo = expo * 10;

	while (expo > 1)
	{
		_putchar((result / expo) % 10 + '0');
		expo = expo / 10;
	}
	_putchar(result % 10 + '0');
}
