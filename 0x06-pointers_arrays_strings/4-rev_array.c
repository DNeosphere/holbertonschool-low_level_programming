#include "holberton.h"
/**
 * _strcpy - copies a pointed string
 * @dest: pointer to the destine string
 * @src: pointer to the source string
 * Return: the adress of the destiny string
 */
void reverse_array(int *a, int n)
{
int len;
int rev;
int buff[1000];
int x;
int cop;
x = 0;

for (len = 0; a[len] <= n; len++)
{
}
	for (rev = len; a[rev] > 0; rev--)
	{
	buff[x] = a[rev];
	x++;
	}
		for (cop = 0; a[cop] <= n; cop++)
		{
		a[cop] = buff[cop];
		}
}
