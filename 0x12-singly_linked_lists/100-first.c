#include <stdio.h>

/**
 * bmain - A function that is eecuted before main.
 *
 * Return: No return.
 *
 */

void __attribute__ ((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back\n");
}
