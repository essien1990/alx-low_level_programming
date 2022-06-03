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
	int k = 48;

	while (k < 58)
	{
		putchar(k);
		if (k != 57)
		{
			putchar(44);
			putchar(32);
		}
		k++;
	}

	putchar(10);

	return (0);

}
