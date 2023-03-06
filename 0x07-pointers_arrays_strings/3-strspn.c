#include "main.h"

/**
 * _strspn - Gets the lenght of a prefix substring.
 * @s: Initial segment.
 * @accept: Acceptd bytes.
 *
 * Return: The number of bytes in the initial segment of s which consist
 * of only bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, bool;

	for (a = 0; *(s + a) != '\0'; a++)
	{
		bool = 1;

		for (b = 0; *(accept + b) != '\0'; b++)
		{
			if (*(s + a) == *(accept + b))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}

	return (a);
}
