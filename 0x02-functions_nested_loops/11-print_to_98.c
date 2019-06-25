#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - takes a value to 98
 * @n: value
 *
 */
void print_to_98(int n)
{
int greatn;
int smalln;
if (n >= 98)
{
for (greatn = n; greatn >= 98; greatn--)
{
if (greatn == 98)
{
printf("%d", greatn);
break;
}
printf("%d, ", greatn);
}
putchar ('\n');
}
else
{
for (smalln = n; smalln <= 98; smalln++)
{
if (smalln == 98)
{
printf("%d", smalln);
break;
}
printf("%d, ", smalln);
}
putchar('\n');
}
}
