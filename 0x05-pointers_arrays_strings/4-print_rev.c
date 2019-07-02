#include "holberton.h"
/**
 *
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
/*	if (b == 0)
	{
	break;
	} */
	}
_putchar('\n');
}
