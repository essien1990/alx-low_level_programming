#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of program.
 * @ac: argument count
 * @av: pointer to argument vectors
 * Return: pointer to new buffer with all arguments as 1 string.
 */

char *argstostr(int ac, char **av)
{
	int i, j, len, bufferlen;
	char *k;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);

	i = j = len = bufferlen = 0;
	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}
	k = (char *)malloc(len * sizeof(char) + ac + 1);
	if (k == NULL)
		return (NULL);
	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++, bufferlen++)
			k[bufferlen] = av[i][j];
		k[bufferlen] = '\n';
		bufferlen++;
	}
	k[bufferlen] = '\0';
	return (k);
}
