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

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	ndog->name = name;
	ndog->age = age;
	ndog->owner = owner;

	cpname = _strdup(ndog->name);
	if (cpname == NULL)
	{
		free(cpname);
		free(ndog);
		return (NULL);
	}
	cpowner = _strdup(ndog->owner);
	if (cpowner == NULL)
	{
		free(cpowner);
		free(cpname);
		free(ndog);
		return (NULL);
	}
return (ndog);
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
