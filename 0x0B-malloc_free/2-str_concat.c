#include "main.h"
#include <stdlib.h>

/**
 * str_concat -  function that concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: pointer should point to a newly allocated space
 * or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int w, x, y, z;
	char *s;

	if (s1 == NULL)
		w  = 0;
	else
	{
		for (w = 0; s1[w]; w++)
			;
	}
	if (s2 == NULL)
		x == 0;
	else
	{
		for (x = 0; s2[x]; x++)
			;
	}
	y = w + x + 1;
	s = malloc(y * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (z = 0; z < w; z++)
		s[z] = s1[z];
	for (z = 0; z < x; z++)
		s[z + w] = s2[z];
	s[w + x] = '\0';
	return (s);
}
