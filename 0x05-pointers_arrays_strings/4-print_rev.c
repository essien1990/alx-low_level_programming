#include "main.h"

/**
 * print_rev - prints a string, followed by a new line.
 * @s: input string to print.
 */

void print_rev(char *s)
{
	int n;

	while (s[n] != '\0')
	{
		n++;
	}
	n--;

	while (s[n] != '\0')
	{
		_putchar(s[n--]);
	}
	_putchar('\n');
}
