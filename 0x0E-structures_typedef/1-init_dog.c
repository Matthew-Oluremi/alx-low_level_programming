#include "dog.h"

/**
 * init_dog - A function that initialize a variable of type struct dog.
 *
 * @d: Struct dog.
 * @name: Dog's name.
 * @age: Dog's age.
 * @owner: Owner's age.
 *
 * Return: No return.
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
