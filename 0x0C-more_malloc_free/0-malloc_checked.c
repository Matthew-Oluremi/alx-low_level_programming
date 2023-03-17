#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - A function thaf allocates memory
 * using malloc.
 * @b: Memory size in bytes.
 *
 * Return: Returns a pointer to the allocated memory,
 * if malloc fails, normal process termination with
 * a status value of 98.
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
