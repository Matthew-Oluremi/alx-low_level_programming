#include "main.h"
#include <stdlib.h>

/**
 * str_concat - A function that concatenates two strings.
 * @s1: First string.
 * @s2: Second string'
 *
 * Return: Returns pointer of an array of chars
 * and NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int a, b, c, stop;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;

	for (b = 0; s2[b] != '\0'; b++)
		;

	ptr = malloc(sizeof(char) * (a + b + 1));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (c = 0; c < a; c++)
		ptr[c] = s1[c];

	stop = b;

	for (b = 0; b <= stop; c++, b++)
		ptr[c] = s2[b];

	return (ptr);
}
