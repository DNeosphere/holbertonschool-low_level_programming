#include "holberton.h"
/**
 * print_rev - prints a reversed string
 * @s: pointer to the string
 *
 */
void print_rev(char *s)
{
int a;
int b;
a = 0;
	while (s[a] != '\0')
	{
	a++;
	}
	for (b = a - 1; b >= 0; b--)
	{
	_putchar(s[b]);
	}
_putchar('\n');
}
