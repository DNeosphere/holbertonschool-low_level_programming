 #include "holberton.h"
/**
 * print_diagonal - print lines and spaces in a diagonal line
 * @n: lenght of diagonal
 */
void print_diagonal(int n)
{
int y;
int x;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (y = 0; y < n; y++)
{
	for (x = 0; x <= y; x++)
	{
		if (x == y)
		{
		_putchar('\\');
		}
		else
		{
		_putchar(' ');
		}
	}
_putchar('\n');
}
}
}
