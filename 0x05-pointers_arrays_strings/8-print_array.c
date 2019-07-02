#include "holberton.h"
#include <stdio.h>
/**
 * print_array - print the content of an array of integers
 * @a: pointer to the string
 * @n: index of the array
 */
void print_array(int *a, int n)
{
int b;
for (b = 0; b < n; b++)
	{
	printf("%d", a[b]);
	if (b == n - 1)
	{
	break;
	}
	printf(", ");
	}
putchar('\n');
}
