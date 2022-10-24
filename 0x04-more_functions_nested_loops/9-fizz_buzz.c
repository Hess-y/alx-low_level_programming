#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers,followed by a new line.
 * for multiples of three print Fizz instead of the number
 * for multiples of five print Buzz
 * For numbers which are multiples of both three and five print FizzBuzz
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
