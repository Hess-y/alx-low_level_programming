#include "main.h"
/**
 * _strncat - concatenates two strings
 * @src: source
 * @dest: destination
 * @n: bytes usd from src
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}

	y = 0;
	while (j < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
