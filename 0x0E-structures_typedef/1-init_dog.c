#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initilizates a data structure
 * @d: pointer to the structure
 * @name: input for name member
 * @age: input for age member
 * @owner: input for owner member
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}

