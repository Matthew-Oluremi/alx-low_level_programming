#include "3-calc.h"

/**
 * op_add - Adds two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: Add.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The difference.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The product of the two integers.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: Division.
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Find the modulo of two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The remainder of the division.
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
