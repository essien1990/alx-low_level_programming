#include "main.h"

/**
 * print_numbers - function that prints number 0-9
 *
 * @i: variable for the numbers
 *
 * Description: Prints numbers from 0 to 9
 *
 * Return: returns nothing 
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
