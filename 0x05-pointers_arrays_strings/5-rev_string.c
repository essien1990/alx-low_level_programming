/**
 * rev_string - reverses a string.
 * @s: input string to reverse.
 */

void rev_string(char *s)
{
	int a, b;
	char pr[1000];

	a = b = 0;

	while (s[a] != '\0')
	{
		pr[a] = s[a];
		a++;
	}
	a--;

	while (a >= 0)
	{
		s[a] = pr[b];
		a--;
		b++;
	}
	s[b++] = '\0';
}
