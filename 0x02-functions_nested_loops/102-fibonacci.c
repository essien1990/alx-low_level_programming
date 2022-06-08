#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Description: prints 50 Fibonacci numbers
 *
 * Return: 0 (success)
 */

int main(void)
{
	int counter;

	unsigned long fi1 = 0, fi2 = 1, sum;

	for (counter = 0; counter < 50; counter++)
	{
		sum = fi1 + fi2;
		printf("%lu", sum);

		fi1 = fi2;
		fi2 = sum;

		if (counter == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
