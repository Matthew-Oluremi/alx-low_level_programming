#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 *
 * followed by a new line
 */

void print_numbers(void)
{
	int m;

	for (m = 0; m < 10; m++)
	{
		_putchar(m + '0');
	}

	_putchar('\n');
}

