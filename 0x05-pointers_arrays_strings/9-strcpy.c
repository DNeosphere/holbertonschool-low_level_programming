#include "holberton.h"
/**
 * _strcpy - copies a pointed string
 * @dest: pointer to the destine string
 * @src: pointer to the source string
 * Return: the adress of the destiny string
 */
char *_strcpy(char *dest, char *src)
{
int a;
a = 0;
	while (src[a] != '\0')
	{
	dest[a] = src[a];
	a++;
	}
dest[a] = '\0';
return (dest);
}
