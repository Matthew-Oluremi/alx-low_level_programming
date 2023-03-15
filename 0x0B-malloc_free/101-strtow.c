#include <stdlib.h>
#include "main.h"

/**
 * count_word - Help function to count the number of words in a string.
 * @s: The string.
 *
 * Return: No. of words.
 */

int count_word(char *s)
{
	int count, m, n;

	count = 0;
	n = 0;

	for (m = 0; s[m] != '\0'; m++)
	{
		if (s[m] == ' ')
		count = 0;

		else if (count == 0)
		{
			count = 1;
			n++;
		}
	}

	return (n);
}

/**
 * **strtow - A functon that splits a string into words.
 * @str: String to be splitted.
 *
 * Return: The function returns a pointer to an array of strings
 * (words), and NULL if it fails.
 */

char **strtow(char *str)
{
	char **mat, *tp;
	int x, y = 0, lent = 0, words, a = 0, stat, end;

	while (*(str + lent))
		lent++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	mat = (char **) malloc(sizeof(char *) * (words + 1));
	if (mat == NULL)
		return (NULL);

	for (x = 0; x <= lent; x++)
	{
		if (str[x] == ' ' || str[x] == '\0')
		{
			if (a)
			{
				end = x;
				tp = (char *) malloc(sizeof(char) * (a + 1));
				if (tp == NULL)
					return (NULL);
				while (stat < end)
					*tp++ = str[stat++];
				*tp = '\0';
				mat[y] = tp - a;
				y++;
				a = 0;
			}
		}
		else if (a++ == 0)
			stat = x;
	}

	mat[y] = NULL;

	return (mat);
}
