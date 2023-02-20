#include <stdio.h>

/**
 * main - print all possible combinations of two two-digit numbers
 *
 * Description: print all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int m, n, o, p;

	m = 48;
	while (m < 58)
	{
		n = 48;
		while (n < 58)
		{
			p = n + 1;
			o = m;
			while (o < 58)
			{
				while (p < 58)
				{
					putchar(m);
					putchar(n);
					putchar(32);
					putchar(o);
					putchar(p);
					if (m < 57 || n < 56 || o < 57 || p < 57)
					{
						putchar (44);
						putchar (32);
					}
					p++;
				}
				p = 48;
				o++;
			}
			n++;
		}
		m++;
	}
	putchar(10);			
	return (0);
}
