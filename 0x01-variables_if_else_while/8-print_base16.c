#include <stdio.h>

/**
 * main - print all numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	int numbers;
	char letters;

	for (number = 0; number < 10; number++)
		putcher((number % 10) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putcher(letter);

	putcher('\n');
	return (0);
