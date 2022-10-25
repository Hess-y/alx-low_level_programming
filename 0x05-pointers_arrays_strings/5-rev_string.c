#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: string input
 */
void rev_string(char *s)
{
	int x = 0, b, c;
	char d;

	while (s[x] != '\0')
	{
		x++;
	}
	c = x - 1;
	for (b = 0; c >= 0 && b < c; c--, b++)
	{
		d = s[b];
		s[b] = s[c];
		s[c] = d;
	}
}
