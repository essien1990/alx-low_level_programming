#include "main.h"

/**
 * more_numbers - function that prints 0-14
 * ten times
 *
 * Description: Prints numbers from 0 to 14
 * ten times
 *
 * Return: returns nothing
 */

void more_numbers(void)
{
	int a, b, c, d;

	for (b = 0; b < 10; b++)
	{
		c = 0;
		d = 0;
		for (a = 48; a < 63; a++)
		{
			if (!(a > 57))
				d = a;
			else
			{
				d = a - 10;
				c = 49;
				_putchar(c);
			}
			_putchar(d);
		}
		_putchar('\n');
	}
}
