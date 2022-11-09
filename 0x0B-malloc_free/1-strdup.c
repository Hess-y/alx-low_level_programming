#include "main.h"
#include <stdlib.h>
/**
 * _strdup -  function that returns a pointer to
 * a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: source string
 * Return: pointer to the duplicated string.
 * returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *duplicate;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	duplicate = (char *)malloc((sizeof(char) * len) + 1);
	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i < len, i++)
		duplicate[i] = str[i];
	duplicate[len] = '\0';
	return (duplicate);
}
