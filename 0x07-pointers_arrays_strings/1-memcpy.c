#include "holberton.h"
/**
 * memcpy - copies a chunk of memory into other array
 * @src: source string
 * @dest: destiny string
 * @n: amount of memory to be copied
 * Return: the changed string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n--)
	{
	*dest = *src;
	dest++;
	src++;
	}
return (dest);
}
