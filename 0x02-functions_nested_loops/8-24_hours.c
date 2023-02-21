#include "main.h"

/**
 * jack_bauer - prints time
 *
 * Description: prints a list of time
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int m, n;

	for (m = 0; m < 24; m++)
	{
		for (n = 0; n < 60; n++)
		{
			_putchar(m / 10 + 48);
			_putchar(m % 10 + 48);
			_putchar(':');
			_putchar(n / 10 + 48);
			_putchar(n % 10 + 48);
			_putchar('\n');
		}
	}
}
