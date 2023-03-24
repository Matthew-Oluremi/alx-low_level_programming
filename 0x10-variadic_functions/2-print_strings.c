#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - A function that print strings followed by a new line.
 * @separator: Is the string to be printed between the strings.
 * @n: Is the number of strings passed to the function.
 * @...: Variable number of strings to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 * If one of the strings is NULL, (nil) is printed instead.
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list mystrings;
	char *s;
	unsigned int count;

	va_start(mystrings, n);

	for (count = 0; count < n; count++)
	{
		s = va_arg(mystrings, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (count != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(mystrings);
}
