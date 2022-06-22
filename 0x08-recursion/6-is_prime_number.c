#include "main.h"

/**
 * check - checks recursively the input from is_prime_number
 * @x: iterator
 * @base: base number to check
 * Return: 1 if n is a prime, else return 0 otherwise.
 */

int check(int x, int base)
{
	if (base % x == 0 || base < 2)
		return (0);
	else if (x == base - 1)
		return (1);
	else if (base > x)
		return (checker(x + 1, base));
	return (1);
}

/**
 * is_prime_number - checks if the number is a prime number
 * @n: number to check
 * Return: 1 if n is a prime, else return 0 otherwise.
 */

int is_prime_number(int n)
{
	return (check(2, n));
}
