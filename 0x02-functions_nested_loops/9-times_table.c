#include "holberton.h"
/**
 * times_table - matrix for table 9.
 *
 */
void times_table(void)
{
int multr;
int multd;
for (multr = 0; multr <= 9; multr++)
{
for (multd = 0; multd <= 9; multd++)
{
if (multr * multd >= 10)
{
_putchar((multr * multd) / 10 + '0');
_putchar((multr * multd) % 10 + '0');
if (multd != 9)
{
_putchar(' ');
_putchar(',');
}
}
else
{
if (multd != 0)
{
_putchar(' ');
}
_putchar((multr * multd) % 10 + '0');
if (multd != 9)
{
_putchar(',');
_putchar(' ');
}
}
}
_putchar('\n');
}
}
