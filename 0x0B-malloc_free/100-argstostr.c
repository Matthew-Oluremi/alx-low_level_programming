#include "main.h"
#include <stdlib.h>

/**
 * argstostr - A function that concatenates all the arguments.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: Returns a pointer to a new string, or NULL if it fails.
 */

char *argstostr(int ac, char **av)
{
	char *p;
	int a, b, c, d;

	if (ac == 0)
		return (NULL);

	for (a = b = 0; b < ac; b++)
	{
		if (av[b] == NULL)
			return (NULL);

		for (c = 0; av[b][c] != '\0'; c++)
			a++;
		a++;
	}

	p = malloc((a + 1) * sizeof(char));

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (b = c = d = 0; d < a; c++, d++)
	{
		if (av[b][c] == '\0')
		{
			p[d] = '\n';
			b++;
			d++;
			c = 0;
		}
		if (d < a - 1)
			p[d] = av[b][c];
	}
	p[d] = '\0';

	return (p);
}
