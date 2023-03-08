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

/**
 * compare_function - Function that compares each character of the string.
 * @s: String.
 * @a: Smallest iterator.
 * @b: Biggest iterator.
 *
 * Return: (0) success.
 */

int compare_function(char *s, int a, int b)
{
	if (*(s + a) == *(s + b))
	{
		if (a == b || a == b + 1)
			return (1);
		return (0 + compare_function(s, a + 1, b - 1));
	}
	return (0);
}

/**
 * is_palindrome - Function that detects if a string is a palindrome.
 * @s: String.
 *
 * Return: Returns 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare_function(s, 0, _strlen_recursion(s) - 1));
}
