#include <stdlib.h>

/**
 * create_array - creates and initializes an array of chars with char c
 * @size: size of the array
 * @c: char to initialize the array with
 * Return: pointer to the array of chars
 */

char *create_array(unsigned int size, char c)
{
	char *k;
	unsigned int i;

	if (size > 0)
	{
		k = malloc(size * sizeof(char));
		if (k == NULL)
			return (NULL);
	}
	else
		return (NULL);
	for (i = 0; i < size; i++)
		k[i] = c;
	return (k);
}
