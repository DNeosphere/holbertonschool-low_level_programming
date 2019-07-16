#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat- concatenates two strings into an allocated space of memory
 * @s1: string 1
 * @s2: string 2
 * Return: null if the memory allocation fails
 */
char *str_concat(char *s1, char *s2)
{
	int len3, len1, len2, a, b, copya, copyb;
	char *strcon;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
	{
		len1++;
	}
	for (b = 0; s2[b] != '\0'; b++)
	{
		len2++;
	}
	len2 += 1;
	len3 = len2 + len1;
	strcon = malloc(sizeof(char) * len3);
	if (strcon == NULL)
		return (NULL);
	for (copya = 0; s1[copya] != '\0'; copya++)
	{
		strcon[copya] = s1[copya];
	}
	for (copyb = 0; s2[copyb] != '\0'; copyb++)
	{
		strcon[copya + copyb] = s2[copyb];
	}
	strcon[copya + copyb] = '\0';
	return (strcon);
}
