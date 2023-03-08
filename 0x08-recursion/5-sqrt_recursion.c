#include "main.h"

/**
 * root_operation - Function that returns the natural square root of a number.
 * @n: Input number.
 * @i: Iterator.
 *
 * Return: Return square root or -1.
 */

int root_operation(int n, int i)
{
	if (i % (n / i) == 0)
	{
		if (i * (n / i) == n)
			return (i);
		else
			return (-1);
	}
	return (0 + root_operation(n, i + 1));
}


/**
 * _sqrt_recursion - Function that returns the natural square root of a number.
 * @n: The number.
 *
 * Return: Returns the natural square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (root_operation(n, 2));
}
