 #include "holberton.h"
/**
 * times_table - matrix for table 9.
 *
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
	_putchar(' ');
		if (x == y)
		{
		_putchar('\\');
		}
	}
_putchar('\n');
}
}
}
