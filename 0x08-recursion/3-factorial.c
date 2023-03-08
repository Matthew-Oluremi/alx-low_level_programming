#include "main.h"

/**
 * factorial - Function that returns the factorial of a given number.
 * @n: Input number
 *
 * Return: Factorial of n.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
