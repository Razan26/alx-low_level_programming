#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initalizes a variable
 * @d: pointer initialize
 * @name: name initialize
 * @age: age initialize
 * @owner: owner initialize
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
