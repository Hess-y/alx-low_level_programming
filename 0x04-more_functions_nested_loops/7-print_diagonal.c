#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times char to be printed
 */
void print_diagonal(int n)
{
	int a

	if (n <= 0)
		_putchar('\n');

	for (a = 0; a < n; a++)

		_putchar('/');

	_putchar('\n');
}	
