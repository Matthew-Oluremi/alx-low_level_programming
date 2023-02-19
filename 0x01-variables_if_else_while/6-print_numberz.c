#include <stdio.h>

/**
 * main - print single digit numbers
 *
 * Desciption: print single digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int m = 48;

	while (m < 58)
	{
		putchar(m);
		m++;
	}
	putchar(10);
	return (0);
}
