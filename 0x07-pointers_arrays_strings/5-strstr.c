#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to look though
 * @needle: substring to find
 * Return: pointer to initial segment of haystack
 */

char *_strstr(char *haystack, char *needle)
{
	int a, b, start;
	int len = 0;

	a = 0;
	b = 0;
	start = 0;

	while (needle[len] != '\0')
	{
		len++;
	}
	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; b <= len && haystack[a] == needle[b]; b++, a++)
		{
			if (b == 0)
			{
				start = a;
			}
			if (b == len - 1)
			{
				return (haystack + start);
			}
		}
	}
	return (0);
}
