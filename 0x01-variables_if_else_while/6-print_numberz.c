#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0 using putc           har and without char
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');
	putchar('\n');
	return (0);
}
