#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - A function that frees dogs.
 * @d: struct dog.
 *
 * Return: No return.
 *
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
