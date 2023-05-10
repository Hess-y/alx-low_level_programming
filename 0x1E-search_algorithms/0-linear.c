#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @array: array to search the value in
 * @size: size of the array
 * @value: value to search for
 * Return: index of found value
 * or -1 if null
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
