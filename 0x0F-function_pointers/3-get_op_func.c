#include "3-calc.h"

/**
 * get_op_func - A function that selects the correct function to perform
 * the operation asked by the user.
 * @s: char operator passed as argument to the program.
 *
 * Return: Returns pointer to the function that corresponds to the operator
 * given as a parameter.
 *
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int x = 0;

	while (x < 10)
	{
		if (s[0] == ops->op[x])
			break;
		x++;
	}

	return (ops[x / 2].f);
}
