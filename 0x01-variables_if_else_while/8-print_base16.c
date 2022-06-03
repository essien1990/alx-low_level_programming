#include <stdio.h>

/**
 * main - print numbers of base 16
 *
 * Description: print numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
*/


int main(void)
{
	int k = 0;

	while (k < 48)
	{
		if (k < 10)
			putchar(k + '0');
		else if (k > 41)
			putchar(k - 10 + 'A');
		k++;
	}

	putchar(10);

	return (0);

}
