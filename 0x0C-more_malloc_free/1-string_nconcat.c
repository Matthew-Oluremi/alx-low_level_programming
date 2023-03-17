#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: Memory size in bytes.
 *
 * Return: Returns pointer to newly allocated space in memory.
 * if function fails,return NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int lsA, lsB, lptr, x;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (lsA = 0; s1[lsA] != '\0'; lsA++)
		;

	for (lsB = 0; s2[lsB] != '\0'; lsB++)
		;

	if (n > lsB)
		n = lsB;

	lptr = lsA + n;

	ptr = malloc(lptr + 1);

	if (ptr == NULL)
		return (NULL);
	for (x = 0; x < lptr; x++)
		if (x < lsA)
			ptr[x] = s1[x];
		else
			ptr[x] = s2[x - lsA];

	ptr[x] = '\0';

	return (ptr);
}
