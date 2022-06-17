#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: integers.
 */
void print_number(int n)
{
	int r, t, e;

	e = 1;

	if (n > 0)
		r = n * -1;
	else
	{
		r = n;
		_putchar('-');
	}

	t = r;
	while (t <= -10)
	{
		e *= 10;
		t /= 10;
	}
	while (e >= 1)
	{
		_putchar(((r / e) % 10) * -1 + '0');
		e /= 10;
	}
}
