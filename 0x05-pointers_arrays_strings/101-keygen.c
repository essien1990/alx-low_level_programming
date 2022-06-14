#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define g_minimum 33
#define g_maximum 126

/**
 * main - generate valid passwords for 101-crackme
 * Return: 0 is run with success
 */

int main(void)
{
	int sum = 2772;
	char s;

	srand(time(NULL));
	while (sum > g_maximum)
	{
		s = rand() % (g_maximum - g_minimum) + g_minimum;
		sum -= s;
		if (sum  < g_minimum)
		{
			s -= (g_minimum);
			sum = g_minimum;
		}
		putchar(s);
	}
	putchar(sum);

	return (0);

}
