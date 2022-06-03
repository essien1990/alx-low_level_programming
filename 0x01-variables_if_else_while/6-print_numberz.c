#include <stdio.h>

/**
 * main - print single digit numbers
 *
 * Description: print single digit numbers of base 10
 *
 * Return: Always 0 (Success)
*/


int main(void)
{
	int n = 48;

	while (n < 58)
	{
		putchar(n);
		n++;
	}

	putchar(10);

	return (0);

}
