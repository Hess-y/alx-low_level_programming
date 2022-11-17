#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - add two integers
  * @a: first integer
  * @b: second integer
  *
  * Return: sum of a and b
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtract two integers
  * @a: first integer
  * @b: second integer
  *
  * Return: difference of a and b
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_div - divide two integers
  * @a: first integer
  * @b: second integer
  *
  * Return: division of a and b
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - remainder of division
  * @a: first integer
  * @b: second integer
  *
  * Return: remainder of division of a and b
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}



