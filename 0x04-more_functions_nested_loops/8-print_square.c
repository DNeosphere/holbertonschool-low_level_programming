#include "holberton.h"
/**
 * print_square - prints a square with the size of a given number.
 * @size: size of the square
 *
 */
void print_square(int size)
{
int y;
int x;
if (size <= 0)
{
_putchar('\n');
}
for (y = 0; y < size; y++)
{
	for (x = 0; x < size; x++)
	{
	_putchar(35);
	}
_putchar('\n');
}
}
