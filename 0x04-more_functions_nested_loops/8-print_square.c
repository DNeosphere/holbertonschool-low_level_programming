    
#include "holberton.h"
/**
 * times_table - matrix for table 9.
 *
 */
    
#include "holberton.h"
/**
 * times_table - matrix for table 9.
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
	for (x = 0; x <= size; x++)
	{
	_putchar(35);
	}
_putchar('\n');
}
}
