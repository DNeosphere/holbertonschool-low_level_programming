#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: starting number of the array
 * @max: last number of the array
 * Return: Null if the memory allocation fails
 */
int *array_range(int min, int max)
{
	int a, size, *p;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min) + 1);
	if (p == NULL)
		return (NULL);
	size = (max - min) + 1;
	for (a = 0; a < size; a++)
	{
		p[a] = min;
	min++;
	}
	return (p);
}
