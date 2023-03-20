#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initialize a varaiable of type struct dog
 * @d: Dog's details
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 */

void intit_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
