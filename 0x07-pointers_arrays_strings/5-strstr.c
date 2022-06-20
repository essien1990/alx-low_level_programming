#include "main.h"

/**
 * _strncmp - compares two strings within b bytes.
 * @str1: string to check
 * @str2: string to check from
 * @b: number of bytes to check
 * Return: 0 if strings are the same
 * any other number if they are different.
 */

int _strncmp(char *str1, char *str2, unsigned int b)
{
	unsigned int i;

	for (i = 0; i <= b && *str1 == *str2 && *str1 != '\0' && *str2 != '\0'; i++)
	{
		str1++;
		str2++;
	}
	return (i - b);
}

/**
 * _strstr - locates a substring
 * @haystack: string to look though
 * @needle: substring to find
 * Return: pointer to string with result of search
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int length;

	/*Get the length of needle for strncmp*/
	length = 0;
	while (needle[len] != '\0')
		length++;
	/*compare substrings*/
	while (*haystack != '\0')
	{
		if (_strncmp(haystack, needle, length) == 0)
			return (haystack);
		haystack++;
	}
	return (NULL);
}
