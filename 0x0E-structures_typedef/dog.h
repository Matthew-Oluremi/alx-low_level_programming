#ifndef _DOG_
#define _DOG_

/**
 * struct dog - Defines a new type struct dog.
 *
 * Description: User defined that type called "dog", stores name,
 * age and owner.
 *
 * @name: Dog's name.
 * @age: Dog's age.
 * @owner: Dog's owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
