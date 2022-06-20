#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to look though
 * @needle: substring to find
 * Return: pointer to initial segment of haystack
 */

char *_strstr(char *haystack, char *needle)
{
	char *b;
	char *p;

	while (*haystack != '\0')
	{
		b = haystack;
		p = needle;

		while (*haystack != '\0' && *p != '\0' && *haystack == *p)
		{
			haystack++;
			p++;
		}
		if (!*p)
			return (b);
		haystack = b + 1;
	}
	return (0);
}
