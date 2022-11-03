#include "main.h"
/**
 * _strstr -  function that locates a substring
 * @haystack: string to find substring in
 * @needle: substring to find match of
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int k;

	while (*haystack != '\0')
	{
		  = 0
		while (*haystack == *needle && *haystack != '\0' && *needle != '\0'
