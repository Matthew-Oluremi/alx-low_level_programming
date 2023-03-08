#include "main.h"

/**
 * _strlen_recursion - Function thst returns the length of a string.
 * @s: The string.
 *
 * Return: The length of a sting.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
