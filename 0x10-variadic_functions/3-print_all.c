#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - Prints a char.
 * @arg: A list of arguments pointing to
 * the character to be printed.
 */

void print_char(va_list arg)
{
	char alpha;

	alpha = va_arg(arg, int);
	printf("%c", alpha);
}

/**
 * print_int - Prints an int.
 * @arg: A list of arguments pointing to
 * the integer to be printed.
 */

void print_int(va_list arg)
{
	int number;

	number = va_arg(arg, int);
	printf("%d", number);
}

/**
 * print_float - Prints a float.
 * @arg: A list of arguments pointing to
 * the float to be printed.
 */

void print_float(va_list arg)
{
	float number;

	number = va_arg(arg, double);
	printf("%f", number);
}

/**
 * print_string - Prints a string.
 * @arg: A list of arguments pointing to
 * the string to be printed.
 */

void print_string(va_list arg)
{
	char *string;

	string = va_arg(arg, char *);

	if (string == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", string);
}

/**
 * print_all - Prints anything, followed by a new line.
 * @format: A string of characters representing the argument types.
 * @...: A variable number of arguments to be printed.
 *
 * Description: Any argument not of type char, int, float,
 * or char * is ignored.
 * If a string argument is NULL, (nil) is printed instead.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int x = 0, y = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + x)))
	{
		y = 0;

		while (y < 4 && (*(format + x) != *(funcs[y].symbol)))
			y++;

		if (y < 4)
		{
			printf("%s", separator);
			funcs[y].print(args);
			separator = ", ";
		}

		x++;
	}

	printf("\n");

	va_end(args);
}
