#include <stdio.h>

/**
 * main - print the alphabet in lowercase and uppercase
 *
 * Description: print the alphabet in lowercase
 * and uppercase
 *
 * Return: Always 0 (Success)
*/


int main(void)
{
	int n = 97;
	int p = 65;

	while (n < 123)
	{
		putchar(n);
		n++;
	}


	while (p < 91)
	{
		putchar(p);
		p++;
	}

	putchar(10);

	return (0);

}
