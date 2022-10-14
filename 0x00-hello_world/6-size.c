#include <stdio.h>
/**
 * main -print ouvarious sizes of data types in C
 * code by Hessy
 * Return: 0
*/
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of an int: %lu byte(S)\n", (unsigned long)sizeof(a));
        printf("Size of an long int: %lu byte(S)\n", (unsigned long)sizeof(b));
        printf("Size of an long long int: %lu byte(S)\n", (unsigned long)sizeof(c));
        printf("Size of an char: %lu byte(S)\n", (unsigned long)sizeof(d));
        printf("Size of an float: %lu byte(S)\n", (unsigned long)sizeof(f));
	return (0);
}	
