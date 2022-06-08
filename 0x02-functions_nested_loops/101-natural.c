#include <stdio.h>

/**
 * main - Lists all the natural numbers below 1024
 *
 * Description: list all the natural numbers
 *
 * Return: 0 (success)
 */

int main(void)
{
	int n, sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
			sum += n;
	}

	printf("%d\n", sum);

	return (0);
}
