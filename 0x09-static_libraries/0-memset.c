#include "main.h"

/**
 * _memset - Function fills memory with a constant byte.
 * @s: Memory area.
 * @b: Constant byte.
 * @n: Bytes filled.
 *
 * Return: the parameter to dest.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		*(s + a) = b;

	return (s);
}
