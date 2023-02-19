#include <stdio.h>

/**
 * main - print the latterss of the alphabet
 *
 * Description: print the letters of the alphabet in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int m = 122;

	while (m > 96)
	{
		putchar(m);
		m--;
	}
	putchar(10);
	return (0);
}
