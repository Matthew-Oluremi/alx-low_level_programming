#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: Size of the array.
 * @c: Stored character
 *
 * Return: Returns a pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int count;

	if (size == 0)
		return (NULL);
	ptr = malloc(size * sizeof(c));

	if (ptr == NULL)
		return (NULL);

	for (count = 0; count < size; count++)
	{
		ptr[count] = c;
	}

		return (ptr);
}
