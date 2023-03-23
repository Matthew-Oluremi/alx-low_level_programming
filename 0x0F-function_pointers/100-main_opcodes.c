#include <stdio.h>
#include <stdlib.h>

/**
 * main - Check the code for Holberton School students.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int x, numbytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	numbytes = atoi(argv[1]);

	if (numbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (x = 0; x < numbytes; x++)
	{
		printf("%02x", opc[x] & 0xFF);
		if (x != numbytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
