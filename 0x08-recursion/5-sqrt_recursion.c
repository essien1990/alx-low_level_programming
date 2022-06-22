#include "main.h"

/**
 * check - checks the input number from x to the base
 * @x: number is squared and compared against base
 * @base: base number to check
 * Return: square root of a number
 */

int check(int x, int base)
{
	if (x * x == base)
		return (x);
	if (x * x > base)
		return (-1);
	return (check(x + 1, base));
}

/**
 * _sqrt_recursion - return the natural square root of a number n.
 * @n: number to check for square roots.
 * Return: the natural square root of number n
 */

int _sqrt_recursion(int n)
{
	return (check(1, n));
}
