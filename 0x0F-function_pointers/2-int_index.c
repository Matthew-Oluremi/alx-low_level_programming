#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer.
 * @array: Input integer array.
 * @size: Number of elements in the array, array.
 * @cmp: Pointer to the function to be used
 * to compare values.
 *
 * Return: Returns the index of the first eement for which the cmp
 * function does not return 0. If no elements matches,
 * return -1. If size <= 0, return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (a = 0; a < size; a++)
			if (cmp(array[a]))
				return (a);
	}

	return (-1);
}
