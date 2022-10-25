#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: string input
 */
void rev_string(char *s)
{
	int x = 0, a, b;
	char *str, temp;

	while (x >= 0)
	{
		if (s[x] == '\0')
			break;
		x++;
	}
	str = s;

	for (a = 0; a < (x - 1); a++)
	{
		for (b = a + 1; b > 0; b--)
		{
			temp = *(str + b);
			(str + b) = (str + (b - 1));
			*(str + (b + (b - 1)) = temp;
		}
	}
}
