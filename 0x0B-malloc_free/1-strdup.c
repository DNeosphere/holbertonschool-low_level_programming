#include "holberton.h"
#include <stdlib.h>
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

	for (a = 0; str[a] != '\0'; a++)
	{
		len++;
	}
	news = (char *) malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	if (news == NULL)
		return (NULL);
	for (b = 0; b <= len; b++)
	{
		news[b] = str[b];
	}
	return (news);
}
