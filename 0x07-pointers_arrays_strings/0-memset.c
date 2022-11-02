#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @n: bytes of the memory 
 * @s: constant byte
 * @b: memory area
 * Return : s
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		s[x] = b;
		x++;
	}
	return (s);
}
