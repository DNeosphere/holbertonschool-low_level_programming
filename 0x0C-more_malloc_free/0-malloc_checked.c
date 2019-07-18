#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates a space of memory for b unsigned integers
 * @b: amount of u. integers
 * Return: a pointer to the allocated memory or exits with a status of 98
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
