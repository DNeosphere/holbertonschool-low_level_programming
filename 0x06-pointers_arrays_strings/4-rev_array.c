#include "holberton.h"
/**
 * _strcpy - copies a pointed string
 * @dest: pointer to the destine string
 * @src: pointer to the source string
 * Return: the adress of the destiny string
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
