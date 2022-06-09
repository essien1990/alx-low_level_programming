#include <stdio.h>

/**
 * main - main entry point
 *
 * Return: Return (0) with success
 */

int main(void)
{
	int i = 0;
	int j = 0;
	int k = 0;

	for (i = 1; i < 101; i++)
	{
		j = i % 3;
		k = i % 5;
		if (j == 0 && k == 0)
			printf("FizzBuzz");
		else if (k == 0 && j != 0)
			printf("Buzz");
		else if (j == 0 && k != 0)
			printf("Fizz");
		else
			printf("%d", i);
		if (i < 100)
			_putchar(' ');
	}
	_putchar('\n');
	return (0);
}
