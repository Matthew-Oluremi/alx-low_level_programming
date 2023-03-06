#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonal of a squar
 * matrix of integers.
 * @a: Input pointer.
 * @size: Size of the matrix
 *
 * Return: no return.
 */

void print_diagsums(int *a, int size)
{
	int x, sumA = 0, sumB = 0;

	for (x = 0; x < (size * size); x++)
	{
		if (x % (size + 1) == 0)
			sumA += *(a + x);
		if (x % (size - 1) == 0 && x != 0 && x < size * size - 1)
			sumB += *(a + x);
	}
	printf("%d, %d\n", sumA, sumB);
}
