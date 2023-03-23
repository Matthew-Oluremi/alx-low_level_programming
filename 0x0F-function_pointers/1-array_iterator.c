#include "function_pointers.h"

/**
 * array_iterator - A function executes a function given as a
 * parameter on each element of an array.
 *
 * @array: Input integer array.
 * @size: Size of the array.
 * @action: Pointer to the function.
 *
 * Return: No return.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array && action)
		for (a = 0; a < size; a++)
			action(array[a]);
}
