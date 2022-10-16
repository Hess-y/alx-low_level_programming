#include <stdio.h>

/**
 * main - print all numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	int number;
	char letter;

	for (number = 0; number < 16; number++)
		putchar((number % 16) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');
	return (0);
}
