#include <stdio.h>

/**
 * Secondmain - A function that is eecuted before main.
 *
 * Return: No return.
 *
 */

void __attribute__ ((constructor)) Secondmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back\n");
}
