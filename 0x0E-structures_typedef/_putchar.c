#include <unistd.h>
/**
 * _putchar - writes character c to standout
 * @c: character to print
 * Return: 1 on success
 * on error, -1
 */
int _putchar(char c)
{
	return (write(1, &c. 1));
}
