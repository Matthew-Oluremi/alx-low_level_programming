#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int m = 97;

	while (m < 123)
	{
		putchar(m);
		m++;
	}
	putchar(10);

	return (0);
}
