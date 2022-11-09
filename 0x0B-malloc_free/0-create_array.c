#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars, and initializes it
 * with a specific char
 * @size: sixe of array
 * @c: initial value
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int i;

	if (size == 0)
		return (NULL);

	x = malloc(size * sizeof(char));
	if (x == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		x[i] = c;
	}
	return (x);
}
