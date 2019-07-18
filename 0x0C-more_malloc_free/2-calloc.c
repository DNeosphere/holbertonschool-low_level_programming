#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - copies a string into a newly allocated space in memory
 * @w: string to copy
 * @h: height
 * Return: NULL if size == 0, a pointer to the array, null if
 * the memory allocation fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int arrsize, a;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	arrsize = size * nmemb;
	for (a = 0; a < arrsize; a++)
	{
		p[a] = 0;
	}
return (p);
}
