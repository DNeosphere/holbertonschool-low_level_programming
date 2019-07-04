#include "holberton.h"
/**
 * _strcpy - copies a pointed string
 * @dest: pointer to the destine string
 * @src: pointer to the source string
 * Return: the adress of the destiny string
 */
void reverse_array(int *a, int n)
{
int buff[100];
int x;
int cop;
int len;
x = 0;
len = n;
	while (len != 0)
	{
	buff[x] = a[x];
	len--;
	x++;
	}
	for (cop = 0; cop <= n; cop++)
	{
	x--;
	a[cop] = buff[x];
	}

}
