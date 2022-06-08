#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * @i: The character to be checked.
 *
 * Return: The last digit a integer.
 */

int print_last_digit(int i)
{
	int last_int = i % 10;

	if (last_int < 0)
		last_int *= -1;

	_putchar (last_int + '0');

	return (last_int);
}
