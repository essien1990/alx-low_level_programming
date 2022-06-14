#include "main.h"

/**
 * puts2 - Prints out each char of the string.
 * @str: input string to print.
 */

void puts2(char *str)
{
	int a;

	while (str[a] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
