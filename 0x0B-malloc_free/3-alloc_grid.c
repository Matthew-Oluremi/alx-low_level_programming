#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - A function that returns a pointer to a 2 dimensional
 * array of integers.
 * @height: Height of the array.
 * @width: Width of the array.
 *
 * Return: Returns pointer of an array of integers,
 * and NULL on failure.
 */

int **alloc_grid(int width, int height)
{
	int **ptrgrid;
	int a, b;

	if (width < 1 || height < 1)
		return (NULL);

	ptrgrid = malloc(height * sizeof(int *));

	if (ptrgrid == NULL)
	{
		free(ptrgrid);
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		ptrgrid[1] = malloc(width * sizeof(int));

		if (ptrgrid[a] == NULL)
		{
			for (a--; a >= 0; a--)
				free(ptrgrid[a]);
			free(ptrgrid);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
			ptrgrid[a][b] = 0;

	return (ptrgrid);
}
