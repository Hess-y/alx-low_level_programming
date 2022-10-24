#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: number of times char to be printed
 */
void print_line(int n)
{
	char a;

	for (a = 0; a < n; a++)

		_putchar('_');
	_putchar('\n');
}
