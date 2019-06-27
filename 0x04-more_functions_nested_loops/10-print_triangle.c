#include "holberton.h"
/**
 * print_square - prints a square with the size of a given number.
 * @size: size of the square
 *
 */
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
int a;
int b;
int x;
x = size;
for (a = 0 ; a < size; a++)
{
	for (b = 0; b < size; b++)
	{
		if (x > b)
		{
		_putchar(' ');
		}
		else
		{
		_putchar('#');
		}
	x--;
	}
}
