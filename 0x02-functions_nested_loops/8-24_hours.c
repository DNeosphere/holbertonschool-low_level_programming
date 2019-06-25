#include "holberton.h"
/**
 * jack_bauer - prints all hours,
 * minutes and seconds of the langest day of Jack Bauer
 *
 */
void jack_bauer(void)
{
int hours;
int minutes;
for (hours = 00; hours <= 23; hours++)
{
for (minutes = 00; minutes <= 59; minutes++)
{
_putchar (hours + '0');
_putchar (':');
_putchar (minutes + '0');
_putchar ('\n');
}
}
}
