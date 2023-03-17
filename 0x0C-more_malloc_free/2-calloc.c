#include "main.h"
#include <stdlib.h>

/**
 * _calloc - A function that allocates memory for an array,
 * using malloc.
 * @nmemb: Number of elements.
 * @size: Memory space allocated in bytes.
 *
 * Return: Return pointer to the allocated memory,
 * if nmemb or size is 0, returns NULL,
 * if malloc fails, returns NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pt;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pt = malloc(nmemb * size);

	if (pt == NULL)
		return (NULL);

	for (a = 0; a < (nmemb * size); a++)
		pt[a] = 0;

	return (pt);
}
