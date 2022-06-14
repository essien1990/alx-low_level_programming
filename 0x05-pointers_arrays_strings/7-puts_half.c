#include <string.h>
#include "main.h"

/**
 * puts_half - prints half of a string, and new line
 * @str: argument string to print.
 */

void puts_half(char *str)
{
	int l = strlen(str);
	int a = l / 2;
	int b = 0;
	int c = l % 2;

	for (b = a + c; b < l; b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
