#include <stdio.h>

/**
 * main - Main program that print the number of arguments passed into it.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: return 0.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
