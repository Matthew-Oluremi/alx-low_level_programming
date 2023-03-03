#include "main.h"

/**
 * print_number - prints an integer
 * @n: input integer
 *
 * Return: no return.
 */

void print_number(int n)
{
	unsigned int a, b, count1;

	if (n < 0)
	{
		_putchar(45);
		a = n * -1;
	}
	else
	{
		a = n;
	}

	b = a;
	count1 = 1;

	while (b > 9)
	{
		b /= 10;
		count1 *= 10;
	}

	for (; count1 >= 1; count1 /= 10)
	{
		_putchar(((a / count1) % 10) + 48);
	}
}
