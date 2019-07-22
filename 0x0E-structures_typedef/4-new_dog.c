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
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	char *cpname, *cpowner;
	int lenage, lenowner;

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	ndog->name = name;
	ndog->age = age;
	ndog->owner = owner;

	lenage = _strlen(ndog->name);
	lenowner = _strlen(ndog->owner);

	cpname = malloc(sizeof(char) * lenage + 1);
	if (cpname == NULL)
		return (NULL);
	cpowner = malloc(sizeof(char) * lenowner + 1);
	if (cpowner == NULL)
		return (NULL);
return (ndog);
}
/**
 * _strlen - determinates the lenght of a string
 * @s: pointer to string
 * Return: the length
 */
int _strlen(char *s)
{
int a;
int len;
for (a = 0; s[a] != '\0'; a++)
{
len++;
}
return (a);
}

