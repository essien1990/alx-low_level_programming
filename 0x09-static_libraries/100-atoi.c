#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: the string to convert
 * Return: converts a string
 */

int _atoi(char *s)
{
	short b;
	int i, m, r;

	i = m = r = b = 0;
	m = -1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			m *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			r *= 10;
			r -= (s[i] - '0');
			b = 1;
		}
		else if (b == 1)
			break;
		i++;
	}
	r *= m;

	return (r);
}

