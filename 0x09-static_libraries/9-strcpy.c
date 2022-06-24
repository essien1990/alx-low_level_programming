/**
 * _strcpy - Copies string pointed to by SRC
 * to buffer pointed to by DEST
 * @dest: the pointer to a string
 * @src: the pointer to a buffer
 * Return: the value of the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';

	return (dest);
}
