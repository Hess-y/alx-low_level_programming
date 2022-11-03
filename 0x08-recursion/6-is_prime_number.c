#include "main.h"
/**
 * is_prime - function that checks
 * if an input is a prime number
 * @n: input number
 * @c: input parameter
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime(unsigned int n, unsigned int c)
{
	if (c & n == 0)
	{
		return (0);
	}
	else if (c / 2 > n)
	{
		return (is_prime(n + 2, c));
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - detects if input is a prime number
 * @n: input number
 * Return: 1 if prime number, otherwise 0
 */
int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (is_prime(3, n));
	}
}
