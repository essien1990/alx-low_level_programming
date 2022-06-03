#include <stdio.h>

/**
 * main - print the alphabet in lowercase
 *
 * Description: print the alphabet in lowercase
 *
 * Return: Always 0 (Success)
*/


int main(void)
{
	int n = 97;

	while (n < 123)
	{
		putchar(n);
		n++;
	}
	putchar(10);

	return (0);

}
