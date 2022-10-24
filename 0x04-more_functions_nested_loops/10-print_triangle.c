#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line.
 * @n: size of the triangle
 */
void print_triangle(int size)
{
	int x, tri;

	if (size > 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= size; x++)
		{
			for (tri = size - x; tri > 0; tri--)
			{
				_putchar(' ');
			}

			for (tri = 0; tri < z; tri++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
