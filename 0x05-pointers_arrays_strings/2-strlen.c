#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: pointer to a string whose legth is to be found
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len;

	for (; *s != '\0'; s++)
	{
		len += 1;
	}
	return (len);
}
