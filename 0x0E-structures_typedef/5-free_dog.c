#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new structure type dog_t, a new dog
 * @name: input for name member
 * @age: input for age member
 * @owner: input for owner member
 * Return: a pointer to the new dog
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
