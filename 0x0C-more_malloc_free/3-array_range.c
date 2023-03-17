#include "main.h"
#include <stdlib.h>

/**
 * array_range - A function that creates an array of integers.
 * @min: Minimum value.
 * @max: Minimum value.
 *
 * Return: Returns pointer to the newly created array,
 * if Min > Max, returns NULL,
 * if malloc fails, returns NULL.
 */

int *array_range(int min, int max)
{
	int *arr;
	int a;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(*arr) * ((max - min) + 1));

	if (arr == NULL)
		return (NULL);

	for (a = 0; min <= max; a++, min++)
		arr[a] = min;

	return (arr);
}
