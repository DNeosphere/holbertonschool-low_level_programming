#include "holberton.h"
/**
 * print_triangle - prints a triangle with spaces and hashtags..
 * @size: base of the piramid
 *
 */
void print_triangle(int size)
{
int a;
int b;
int x;
x = size;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (a = 0 ; a < size; a++)
{
	x--;
	for (b = 0; b < size; b++)
	{
		if (b < x)
		{
		_putchar(' ');
		}
		else
		{
		_putchar('#');
		}
	}
_putchar('\n');
}
}
}
