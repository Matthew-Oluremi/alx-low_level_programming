#include "main.h"
#include <stdio.h>

/**
 * main - print the numbers from 1 to 100, followes by a new line
 * but for multiples of three print Fizz instead of the number
 * and for the multiples of five print Buzz
 * Return: Always 0 (Success)
 */

int main(void)
{
	int m;

	for (m = 1; m <= 100; m++)
	{
		if (m % 3 == 0 && m % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (m % 5 == 0 && m % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (m % 3 == 0 && m % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (m == 1)
		{
			printf("%d", m);
		}
		else
		{
			printf(" %d", m);
		}
	}
	printf("\n");

	return (0);

}
