#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Description: prints the first 98 Fibonacci numbers
 *
 * Return: 0 (success)
 */

int main(void)
{
	int count;
	unsigned long fi1_h1, fi1_h2, fi2_h1, fi2_h2;
	unsigned long fi1 = 0, fi2 = 1, sum;
	unsigned long h1, h2;

	for (count = 0; count < 92; count++)
	{
		sum = fi1 + fi2;
		printf("%lu, ", sum);

		fi1 = fi2;
		fi2 = sum;
	}

	fi1_h1 = fi1 / 10000000000;
	fi2_h1 = fi2 / 10000000000;
	fi1_h2 = fi1 % 10000000000;
	fi2_h2 = fi2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		h1 = fi1_h1 + fi2_h1;
		h2 = fi1_h2 + fi2_h2;

		if (fi1_h2 + fi2_h2 > 9999999999)
		{
			h1 += 1;
			h2 %= 10000000000;
		}

		printf("%lu%lu", h1, h2);
		if (count != 98)
			printf(", ");
		fi1_h1 = fi2_h1;
		fi1_h2 = fi2_h2;
		fi2_h1 = h1;
		fi2_h2 = h2;
	}
	printf("\n");
	return (0);
}
