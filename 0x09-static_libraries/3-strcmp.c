#include "holberton.h"
/**
 * _strcmp - copies a pointed string
 * @s1: string to compare
 * @s2: string to be compared
 * Return: cero if the string are the same, the difference in ascii
 * if different
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
