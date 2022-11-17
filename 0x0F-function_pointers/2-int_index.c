#Include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 * @array: array to search in
 * @size: size of the array
 * @cmp: pointer to the compairing function
 * Return: eturns the index of the first element for which
 * the cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array && cmp)
	{
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]) !- 0)
				return (x);
		}
	}

	return (-1);
}
