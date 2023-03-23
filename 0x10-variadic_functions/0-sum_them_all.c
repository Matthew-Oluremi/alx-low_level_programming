#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - A variadic function that sum all its parameters.
 * @n: Number of arguments passed to the function.
 * @... Ellipsis of the variadic function.
 *
 * Return: Returns sum of all its parameters,
 * if n == 0, return 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list para;
	unsigned int count, sum = 0;

	va_start(para, n);

	for(count = 0; count < n; count++)
		sum += va_arg(para, int);

	va_end(para);

	return (sum);

}
