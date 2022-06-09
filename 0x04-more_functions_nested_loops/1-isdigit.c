#include <ctype.h>
#include "main.h"

/**
 * _isdigit - function that checks for a digit
 *
 * @c: function arg for character to be checked
 *
 * Description: A function that checks for a digit
 *
 * Return: 1 if c is uppercase otherwise 0
 */

int _isdigit(int c)
{
	int x = isdigit(c);

	if (x == 0)
		return (x);
	else
		return (1);
}
