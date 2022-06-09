#include <ctype.h>
#include "main.h"

/**
 * _isupper - function that checks for uppercase letters
 *
 * @c: function arg for character to be checked
 *
 * Description: A function that checks for uppercase characters
 *
 * Return: 1 if c is uppercase otherwise 0
 */

int _isupper(int c)
{
	int x = isupper(c);

	if (x == 0)
		return (x);
	else
		return (1);
}
