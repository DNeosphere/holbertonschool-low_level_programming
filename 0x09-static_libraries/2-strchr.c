#include "holberton.h"
/**
 * _strchr - looks for the first occurence of a char
 * @s: source string
 * @c: character to find
 * Return: Null if character not found or pointer to the C character
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
	if (*s == c)
	{
		return (s);
	}
s++;
}
if (*s == c)
{
	return (s);
}
return (0);
}
