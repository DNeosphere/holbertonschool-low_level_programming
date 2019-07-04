#include "holberton.h"
/**
 * _strncpy - copies a pointed string up to n charcters
 * @n: number of characters
 * @dest: pointer to the destine string
 * @src: pointer to the source string
 * Return: the adress of the destiny string
 */
char *_strncpy(char *dest, char *src, int n)
{
int a;
for (a = 0; (src[a] != '\0' && a  < n) ; a++)
	{
	dest[a] = src[a];
	}
dest[a] = '\0';
return (dest);
}
