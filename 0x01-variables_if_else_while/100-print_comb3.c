#include <stdio.h>

/**
 * main - print all possible different combinations
 *
 * Description: print all possible different combinations
 *
 * Return: Always 0 (Success)
*/


int main(void)
{
	int k = 48;
	int m = 48;

	while (k < 58)
	{
		m = k + 1;
		while (m < 58)
		{
			putchar(k);
			putchar(m);

			if (k < 56 || m < 57)
			{
				putchar(44);
				putchar(32);
			}
			m++;

		}
		k++;
	}

	putchar(10);

	return (0);

}
