#include "holberton.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 * Return: Null if the memory allocation fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int a, b;
	char *nptr;

	if (old_size == new_size)
	return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	nptr = malloc(new_size);
	if (nptr == NULL)
		return (NULL);
	if (ptr == NULL)
		return (nptr);
	if (new_size > old_size)
	{
		for (a = 0; a < old_size; a++)
			nptr[a] = ((char *)ptr)[a];
	}
	else
	{
		for (b = 0; b < new_size; b++)
			nptr[b] = ((char *)ptr)[b];
	free(ptr);
	return (nptr);
	}
	free(ptr);
	return (nptr);
}
