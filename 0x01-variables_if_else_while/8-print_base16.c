#include <stdio.h>

/**
 * main - print all hexadecimal numbers in lowercase
 *
 * Description: print all hexadecimal number in lowercase
 *
 * Return: lways 0 (Success)
 */

int main(void)
{
	int i = 0;

	while (i < 48)
	{
		if (i < 10)
			putchar(i + '0');
		else if (i > 41)
			putchar(i - 10 + 'A');
		i++;
	}
	putchar(10);

	return (0);
}
