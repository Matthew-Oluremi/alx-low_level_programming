#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the aphabet in lower then in uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int m, n;

	m = 97;
	n = 65;

	while (m < 123)
	{
		putchar(m);
		m++;
	}
	
	while (n < 91)
	{
		putchar(n);
		n++;
	}

	putchar(10);

	return (0);
}
