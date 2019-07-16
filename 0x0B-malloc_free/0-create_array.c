#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars with malloc
 * @c: character to fill the array
 * @size: amount of memory slots to reserve
 * Return: NULL if size == 0, a pointer to the array, null if
 * the memory allocation fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *t;
	t = (char *) malloc(sizeof(c) * size);

	if (t == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	for (a = 0; a <= size; a++)
	{
		t[a] = c;
	}
return (t);
}
