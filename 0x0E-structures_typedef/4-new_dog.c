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
	dog_t *new_dog;
	char *cpname, *cpowner;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	cpname = _strdup(name);
	if (cpname == NULL)
	{
		free(new_dog);
		free(cpname);
		return (NULL);
	}
	cpowner = _strdup(owner);
	if (cpowner == NULL)
	{
		free(new_dog);
		free(cpname);
		free(cpowner);
		return (NULL);
	}
	new_dog->name = cpname;
	new_dog->age = age;
	new_dog->owner = cpowner;
	if (cpowner != NULL)
		free(cpowner);
	if (cpname != NULL)
		free(cpname);
	
return (new_dog);
}
/**
 * _strdup - copies a string into a newly allocated space in memory
 * @str: string to copy
 * Return: NULL if size == 0, a pointer to the array, null if
 * the memory allocation fails
 */
char *_strdup(char *str)
{
	char *news;
	int a, b, len = 0;

	if (str == NULL)
		return (NULL);
	for (a = 0; str[a] != '\0'; a++)
	{
		len++;
	}
	len += 1;
	news = (char *) malloc(sizeof(char) * len);
	if (news == NULL)
		return (NULL);
	for (b = 0; b <= len; b++)
	{
		news[b] = str[b];
	}
	return (news);
}
