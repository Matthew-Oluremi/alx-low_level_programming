#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9,
 * except 2 and 4, followed by a new line
 */

void print_most_numbers(void)
{
	int m;

	for (m = 0; m < 10; m++)
	{
		if (m != 2 && m != 4)
		{
			_putchar(m + '0');
		}
	}

	_putchar('\n');
}
