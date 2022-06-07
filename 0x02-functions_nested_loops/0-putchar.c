#include "main.h"

/**
 * main - prints Programming
 *
 * Description: prints Programming
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char s[10] = "_putchar";
	int n = 0;

	for (n = 0; n < 9; n++)
	{
		_putchar(s[n]);
	}
	_putchar('\n');

	return (0);
}
