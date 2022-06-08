#include <stdio.h>

/**
 * main - prints the sum of the even-valued terms 
 *
 * Description: sum of the even-valued terms
 *
 * Return: 0 (success)
 */

int main(void)
{
	float total;

	unsigned long fi1 = 0, fi2 = 1, sum;

	while (1)
	{
		sum = fi1 + fi2;
		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			total += sum;

		fi1 = fi2;
		fi2 = sum;
	}
	printf("%.0f\n", total);

	return (0);
}
