#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: string input
 */
void puts_half(char *str)
{
	int x = 0, a;

	while (x >= 0)
	{
		if (str[x] == '\0')
			break;
		x++;
	}
	if (x % 2 == 1)
		a = x / 2;
	else
		a = (x - 1) / 2;

	for (a++; a < x; a++)
		_putchar(str[a];
	_putchar('\n');
}
