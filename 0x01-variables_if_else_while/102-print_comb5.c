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
	int k, m, n, p;

	k = 48;
	while (k < 58)
	{
		m = 48;
		while (m < 58)
		{
			n = m + 1;
			n = k;
			while (n < 58)
			{
				while (p < 58)
				{
					putchar(k);
					putchar(m);
					putchar(32);
					putchar(n);
					putchar(p);
					if (k < 57 || m < 56 || n < 57 || p < 57)
					{
						putchar(44);
						putchar(32);
					}
					p++;
				}
				p = 48;
				n++;
			}
			m++;
		}
		k++;
	}

	putchar(10);

	return (0);
}
