#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets in lowercase
 *
 */
void print_alphabet_x10(void);
{
	int letter;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);

		_putchar('\n');
	}
}
