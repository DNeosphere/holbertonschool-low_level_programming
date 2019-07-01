#include "holberton.h"
/**
 *
 *
 */
void print_rev(char *s)
{
int a;
		for (a = s['\0']; a == s[0]; a--)
	{
_putchar(s[a]);
}
_putchar('\n');
}
