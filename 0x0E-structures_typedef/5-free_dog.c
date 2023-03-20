#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Initialize a given variable of the type struct dog
 * @d: Dog's details
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
