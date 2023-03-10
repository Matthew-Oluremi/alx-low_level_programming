#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @c: Character.
 * @s: String.
 *
 * Return: The pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	unsigned int a = 0;

	for (; *(s + a) != '\0'; a++)
		if (*(s + a) == c)
			return (s + a);
	if (*(s + a) == c)
		return (s + a);
	return ('\0');
}
