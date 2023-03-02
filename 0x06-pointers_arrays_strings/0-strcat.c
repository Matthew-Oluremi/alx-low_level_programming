#include "main.h"

/**
 * *_strcat - function concatenates strings
 * @dest: parameter pionter to char
 * @src: parameter pointer to a char
 * Return: return value of dest
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}

	dest[a] = '\0';
	return (dest);
}
