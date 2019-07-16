#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - copies a string into a newly allocated space in memory
 * @w: string to copy
 * @h: height
 * Return: NULL if size == 0, a pointer to the array, null if
 * the memory allocation fails
 */
int **alloc_grid(int w, int h)
{
	int a, b, c;
	int **p;

	if (w < 1 || h < 1)
		return (NULL);
	p = malloc(sizeof(int *) * h);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (a = 0; a < h; a++)
	{
		p[a] = malloc(sizeof(int) * w);
		if (p[a] == NULL)
		{
			for (; a >= 0; a--)
			{
				free(p[a]);
			}
			free(p);
			return (NULL);
		}
	}
	for (b = 0; b < h; b++)
	{
		for (c = 0; c < w; c++)
		{
			p[b][c] = 0;
		}
	}
	return (p);
}
