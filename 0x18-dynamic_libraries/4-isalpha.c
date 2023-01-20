# include "main.h"
/**
 * _isalpha - checks for alphabets char
 * @c: the char to be checked
 *
 * Return: 1 if the char is letter lowercase or uppercase. otherwise 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && 'Z'))
		return (1);
	else
		return (0);
}
