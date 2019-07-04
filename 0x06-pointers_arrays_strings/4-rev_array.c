#include "holberton.h"
/**
 * reverse_array - copies a reversed pointed array of integers
 * @a: array of integers
 * @n: amount of integers to be copied
 */
void reverse_array(int *a, int n)
{
int cop;
int x;
int rev;
int buff[1000];
x = n;

	for (rev = 0; rev <= n; rev++)
	{
	x--;
	buff[x] = a[rev];
	}
	for (cop = 0; cop < n; cop++)
	{
	a[cop] = buff[cop];
	}

}
