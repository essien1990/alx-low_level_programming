/**
 * _strcat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * Return: @dest
 */

char _strcat(char *dest, char *src)
{
	int a, b; /* b is length of charaters */

	for (b = 0; dest[b] != '\0'; b++)
		;
	for (a = 0; src[a] != '\0'; a++)
		dest[b + a] = src[a];
	dest[b + a] = '\0';
	return (dest);
}
