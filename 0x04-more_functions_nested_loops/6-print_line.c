#include "holberton.h"
/**
 * print_line - prints a line n times.
 * @n: length of line
 */
void print_line(int n)
{
int print;
for (print = 0; print < n; print++)
{
_putchar(95);
}
_putchar('\n');
}
