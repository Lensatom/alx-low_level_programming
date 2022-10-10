#include "stdlib.h"
#include "dog.h"

/**
 * init_dog - initializes variable of type struct
 * @dog: The struct
 * @name: A member of the struct
 * @age: A member of the struct
 * @owner: A member of the struct
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
