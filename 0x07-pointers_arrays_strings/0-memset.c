#include "holberton.h"
/**
 * _memset - replaces the first n bytes of the memory
 * for b character
 * @s: pointer to the memory
 * @b: character to replace
 * @n: amount of bytes to replace
 * Return: pointer to the string
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;
	for (a = 0; a < n; a++)
	{
	s[a] = b;
	}
return (s);
}
