#include "holberton.h"
/**
 * _memcpy - copies a chunk of memory into other array
 * @src: source string
 * @dest: destiny string
 * @n: amount of memory to be copied
 * Return: the changed string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;
	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
return (dest);
}
