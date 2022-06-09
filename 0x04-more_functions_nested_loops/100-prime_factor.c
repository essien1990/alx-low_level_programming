#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the largest prime factor of
 * the number 612852475143
 *
 * Description: Prints the largest prime factor
 * of a number
 *
 * Return: 0 if success
 */

int main(void)
{
	unsigned long n = 612852475143;
	unsigned long fac = 2;

	while (n)
	{
		if (n / fac > 0 && n % fac == 0)
			n = n / fac;
		else if (n / fac > 0 && n % fac != 0)
			fac++;
		else
			break;
	}
	printf("%d\n", fac);
	return (0);
}
