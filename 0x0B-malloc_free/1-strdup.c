#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - copies a string into a new buffer
 * @str: the string to copy
 * Return: pointer to a new buffer
 */

char *_strdup(char *str)
{
	char *k;
	unsigned int len, j;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
		;
	len++;
	if (len < 1)
		return (NULL);
	k = malloc(len * sizeof(char));
	if (k == NULL)
	{
		free(k);
		return (NULL);
	}
	for (j = 0; j < len; j++)
		k[j] = str[j];
	k[j] = '\0';
	return (k);
}
