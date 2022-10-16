#include <stdio.h>
/**
 * main - prints alphabet in lowercase and uppercase
 * Return: 0
 */
int main(void)
{	
	char letters;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (letter = 'A'; letter <= 'z'; letter++)
		putchar(letter);

	putcher('\n');

	return (0);
}
