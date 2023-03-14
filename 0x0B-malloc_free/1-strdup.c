#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the
 * string given as a parameter.
 * @str: String.
 *
 * Return: On success, the _strdup function returns a pointer
 * to the duplicated string. It returns
 * NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *ptstr;
	int str_len = 0;
	int count;

	if (str == NULL)
		return (NULL);

	while (str[str_len] != '\0')
		str_len++;

	ptstr = (char *)malloc((str_len * sizeof(char)) + 1);

	if (ptstr == NULL)
		return (NULL);
	for (count = 0; count <= str_len; count++)
		ptstr[count] = str[count];

	return (ptstr);
}
