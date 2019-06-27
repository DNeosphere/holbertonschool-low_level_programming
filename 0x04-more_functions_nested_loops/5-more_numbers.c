#include "holberton.h"
/**
 * more_numbers - prints the numbers from 0 to 14, ten times.
 *
 */
void more_numbers(void)
{
int tentimes;
int zto1;
int zto9;
for (tentimes = 0; tentimes < 10; tentimes++)
{
for (zto1 = 0; zto1 <= 1; zto1++)
{
for (zto9 = 0; zto9 <= 9; zto9++)
{
if (zto1 != 0)
{
_putchar(zto1 + '0');
}
_putchar(zto9 + '0');
if (zto1 == 1 && zto9 == 4)
{
break;
}
}
}
_putchar('\n');
}
}
