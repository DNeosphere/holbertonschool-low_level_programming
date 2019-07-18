#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat- concatenates two strings with the n bytes of the second
 * @s1: first string
 * @s2: string to be added
 * @n: amount of bytes of the second string to be copied
 * Return: Null if the memory allocation fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, a, b;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1), len2 = _strlen(s2);
	if (n >= len2)
		n = len2;
	p = malloc(sizeof(char) * (len1 + n + 1));
	if (p == NULL)
		return (NULL);
	for (a = 0; s1[a] != '\0'; a++)
	{
		p[a] = s1[a];
	}
	for (b = 0; b < n; b++)
	{
		p[a + b] = s2[b];
	}
	p[a + b] = '\0';
	return (p);
}
/**
 * _strlen - determinates the lenght of a string
 * @s: pointer to string
 * Return: the length
 */
unsigned int _strlen(char *s)
{
	unsigned int a;
	unsigned int len;

	for (a = 0; s[a] != '\0'; a++)
	{
	len++;
	}
return (a);
}
