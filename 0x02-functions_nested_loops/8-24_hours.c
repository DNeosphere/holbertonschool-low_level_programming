#include "holberton.h"
/**
 * jack_bauer - prints all hours,
 * minutes and seconds of the langest day of Jack Bauer
 *
 */
void jack_bauer(void)
{
int hours0;
int hours1;
int minutes0;
int minutes1;
for (hours0 = 0; hours0 <= 2; hours0++)
{
for (hours1 = 0; hours1 <= 3; hours1++)
{
for (minutes0 = 0; minutes0 <= 5; minutes0++)
{
for (minutes1 = 0; minutes1 <= 9; minutes1++)
{
_putchar (hours0 + '0');
_putchar (hours1 + '0');
_putchar (':');
_putchar (minutes0 + '0');
_putchar (minutes1 + '0');
_putchar('\n');
}
}
}
}
}
