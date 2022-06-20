/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory area 's'
 * @b: constant byte to fill
 * @n: number of bytes to fill
 * Return: pointer to memory area 's'
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		s[j] = b;
	return (s);
}
