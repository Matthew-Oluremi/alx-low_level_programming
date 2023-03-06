#include "main.h"

/**
 * _memcpy - Function that copies memory area.
 * @n: Filled bytes.
 * @src: Memory area where n is copied from.
 * @dest: Memory area where n is copied to.
 *
 * Return: The pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		*(dest + a) = *(src + a);

	return (dest);

}
