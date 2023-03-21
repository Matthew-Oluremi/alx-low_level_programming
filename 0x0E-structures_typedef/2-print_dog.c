#include <stdio.h>
#include "dog.h"

/**
 * print_dog - A function that prints a struct.
 * @d: struct dog.
 *
 * Return: No return.
 *
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
			printf("Name is: (nil)\n");
		else
			printf("Name is: %s\n", d->name);

		printf("Age is: %f\n", d->age);

		if (!(d->owner))
			printf("Owner is: (nil)\n");
		else
			printf("Owner is: %s\n", d->owner);
	}
}
