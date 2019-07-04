#include "holberton.h"
/**
 * _strcpy - copies a pointed string
 * @dest: pointer to the destine string
 * @src: pointer to the source string
 * Return: the adress of the destiny string
 */
int _strcmp(char *s1, char *s2)
{
int minus;
while (*s1 != '\0' && *s2 != '\0')
	{
	if (*s1 != *s2)
	{
	minus = *s1 - *s2;
	return (minus);
	}
	s1++;
	s2++;	
	}
return (0);	
}
