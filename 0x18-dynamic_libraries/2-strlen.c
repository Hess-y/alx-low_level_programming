#include "main.h"
#include <string.h>
/**
 * _strlen - returns the length of a string.
 * @s: pointer to a string whose legth is to be found
 * Return: length of the string
 */
int _strlen(char *s)
{
	int x = 0;

	for (; *s++;)
	{
		x++;
	}
	return (x);
}
